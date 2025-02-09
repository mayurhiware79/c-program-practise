#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("Hello, World!\n");
    printf("%s",s);   
    return 0;
}

// char s[100];

// This declares a character array s of size 100, which will store a string (up to 99 characters plus the null terminator \0).
// scanf("%[^\n]%*c", &s);

// scanf("%[^\n]%*c", &s); reads a full line of input until a newline (\n) is encountered.
// Breakdown of the format specifier %[^\n]%*c:
// %[^\n] → This means "read everything except a newline (\n)", effectively reading an entire line.
// %*c → This consumes (but does not store) the newline character (\n) at the end of the input.
// The * in %*c tells scanf to read one character (c), but not store it anywhere.
