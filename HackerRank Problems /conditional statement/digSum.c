#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum;
    while(n !=0){
        sum += n % 10; //selecting last element
        n /= 10; //removing last element
    }
    printf("%d",sum);
    return 0;
}
