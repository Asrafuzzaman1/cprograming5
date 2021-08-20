#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the value of num1 ,num2 and num3.");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("the greatest number is=%d",num1);
        }
        else
        {
            printf("the greatest number is =%d",num3);
        }
    }
    else
    {

        if(num3>num2)
    {
        printf("the greatest number is=%d",num3);

    }
    else
    {
        printf("the greatest number is=%d",num2);
    }

    }



    return 0;
}
