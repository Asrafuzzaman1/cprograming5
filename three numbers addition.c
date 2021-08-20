#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float average;
    printf("enter the value of num1,num2 and num3 :");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    average=(float)sum/3;
    printf("the sum is %d+%d+%d=%d\nthe average is sum/3=%.2f",num1,num2,num3,sum,average);







    return 0;
}
