#include<stdio.h>
int main()
{
    char answer,n,y;
    printf("room is dark?\n");
    printf("enter y for yes and N for no.\n");
    answer=getchar();
    if(answer=='y'||answer=='Y')
    {
        printf("put on lights.");
    }

    if(answer=='n'||answer=='N')
    {
        printf("carry on your study.");
    }




    return 0;
}
