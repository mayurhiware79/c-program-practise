#include <stdio.h>
#include <stddef.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = 25;
    int *_ptr = &_age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    ptrdiff_t offset = ptr - _ptr; // Correct: Stores the difference as an integer
    printf("%td\n", offset);       // Using %td for ptrdiff_t output

    ptr = &_age;
    printf("%d\n", ptr == _ptr);
    return 0;
}