#include<stdio.h>
int main()
{
    double x,result;

    printf("enter the value of x :");
    scanf("%lf",&x);
    result=sin(x);//the value of angle is radian
    printf("the value of sin(%lf)=%lf",x,result);



    return 0;
}
