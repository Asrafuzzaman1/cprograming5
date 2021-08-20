#include<stdio.h>
int main()
{
    char answer,y,n;
    printf("bank balance is zero?\n");
    printf("enter y for yes and N for no .");
    answer=getchar();
    if(answer=='y'||answer=='Y')
    {

        printf("borrow money");
    }

    if(answer=='n'||answer=='N')
    {

        printf("Thank you.");
    }







    return 0;
}
