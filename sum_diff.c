//MY CODE

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

//DAILY-CODER

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c ,&d);
    int int_sum = a+b;
    int int_diff = a-b;
    float float_sum = c+d;
    float float_diff = c-d;
    printf("%d %d\n",int_sum,int_diff);
    printf("%0.1f %0.1f", float_sum,float_diff);
    return 0;
}
