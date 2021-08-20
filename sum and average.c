#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float average;
    printf("enter the value of num1 and num2=");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    average=(float)sum/2;//here float is a type casting
    printf("the sum is %d+%d=%d\nthe average is =%.2f",num1,num2,sum,average);







    return 0;
}
