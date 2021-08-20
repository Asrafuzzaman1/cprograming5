#include<stdio.h>
#include<math.h>
#define lamda 0.001
int main()
{
    int i,R;
    double t;
    float r;

    for(i=1;i<=27;i++)
    {
        printf("--");

    }
    printf("\n");
    for(t=0;t<=3000;t=(t+150))
    {
        r=exp(-lamda*t);
        R=(int)(50*r+.5);
        printf("|");

        for(i=1;i<=R;++i)
        {
            printf("*");
        }
        printf("#\n");
    }
    for(i=1;i<3;++i)
    {
        printf("|\n");
    }
}
