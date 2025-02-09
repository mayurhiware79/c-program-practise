// Input (stdin)
// 10 4
// 4.0 2.0
// Expected Output
// 14 6
// 6.0 2.0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float fa,fb;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&fa,&fb);
    
    printf("%d %d\n",a+b,a-b);
    //printf("%.f.0 %.f.0\n",fa+fb,fa-fb);
    printf("%0.1f %0.1f\n",fa+fb,fa-fb);
    return 0;
}
