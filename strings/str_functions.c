#include <stdio.h>
#include <string.h>
int main()
{
    // declaration
    char name[] = "Shradha Khapra";
    char course[] = {'a', 'p', 'n', 'a', ' ', 'c', 'o', 'l', 'l', 'e', 'g', 'e', '\0'};

    // printing string
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
    // printing string with pointer
    for (char *ptr = name; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");

    // printing using format specifier
    printf("%s\n", name);

    // input a string
    char firstName[40];
    printf("enter first name : ");
    scanf("%s", firstName);
    printf("you first name is %s\n", firstName);
    char fullName[40];
    printf("enter full name : ");
    scanf("%s", fullName);
    printf("you first name is %s\n", fullName);

    // gets & puts
    char fullName[40];
    printf("enter full name : ");
    fgets(fullName, 40, stdin);
    puts(fullName);

    // Library Functions
    char name[] = "Shradha";
    int length = strlen(name);
    printf("the length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));

    // enter String using %c
    printf("enter string : ");
    char str[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}