#include<stdio.h>
int main()
{
    char answer;
    printf("are you male or female ?.\n");
    printf("if you are male,you can press 1 and if you are female,you can press 0.\n");

    answer=getchar();
    if(answer=='1')
    {
        printf("the person is male.");
    }
    if(answer=='0')
    {
        printf("the person is female.");
    }





    return 0;
}
