#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
    char *number[30] = {"one","two","three","four","five","six","seven","eight","nine"};
    
    for(int n=a; n<=b ; n++){
        if( (n >= 1 && n <= 9))
        {
            printf("%s\n",number[n - 1]); 
        } else if ( n > 9)
        {
            if(n % 2 == 0){
                printf("even\n");
            }else {
                printf("odd\n");
            }
        }
    }

    return 0;
}

    
  	// Complete the code.
    // if( (a >= 1 && a <= 9) && (b >=1 && b <= 9)){
    //     char *number[30] = {"one","two","three","four","five","six","seven","eight","nine"};
    //     printf("%s",number[a - 1]);
    //     printf("%s",number[b - 1]);
    // } else if ( a > 9 && b > 9) {
    //     if(a % 2 == 0){
    //         printf("even");
    //     }else {
    //         printf("odd");
    //     }
    //     if(b % 2 == 0){
    //         printf("even");
    //     }else {
    //         printf("odd");
    //     }
    // }
    

    

