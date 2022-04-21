#include <stdio.h>
int main()
{
    int a;
    float x,y,z;
    printf("plase enter the basic salary: ");
    scanf("%i",&a);
    x=a*40/100;
    printf("dearnus allowance is %f.\n",x);
    y=a*20/100;
    printf("house rent allowance is %f.\n",y);
    z=x+y;
    printf("gross salary %f.\n",z);
    return 0;
}