#include<stdio.h>
int main()
{
    int n=1,i=1;
    loop:
        i=i+1;
        if(n==5)
            goto print;
        else
        {
            n=n+1;
            goto loop;
        }
        print:
            printf("%d",i);




    return 0;
}
