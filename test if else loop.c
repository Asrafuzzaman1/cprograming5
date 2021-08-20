#include<stdio.h>
int main()
{
    int n=1,sum=0;
    loop:
    sum=sum+n*n;
    if(n==3)
        goto print;
    else
    {
        n=n+1;
        goto loop;
    }
    print:
    printf("the sum is=%d",sum);




    return 0;
}
