#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter the value of num1 and num2 =");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("the sum is %d+%d=%d\n",num1,num2,result);

        result=num1-num2;
    printf("the subtraction is %d-%d=%d\n",num1,num2,result);

        result=num1*num2;
    printf("the the multiplication is %d*%d=%d\n",num1,num2,result);

        result=num1/num2;
    printf("the divetion is %d/%d=%d\n",num1,num2,result);

        result=num1%num2;
    printf("the modulus of %d and %d is %d\n",num1,num2,result);



    return 0;
}
