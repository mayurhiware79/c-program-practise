#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s[100],sen[100];
    
    // printf("enter character :");
    scanf("%c",&ch);
    // printf("enter string :");
    scanf("%s",s);
    // printf("enter sentence :");
    getchar();
    scanf("%[^\n]%*c", sen);
     printf("%c\n",ch);
     printf("%s\n",s);
     printf("%s\n",sen);
     
    return 0;
}
