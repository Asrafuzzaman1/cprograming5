#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float root1,root2,x;
    printf("enter the value of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    x=((b*b)-(4*a*c));
    if(x<0)
    printf("the roots are immaginary.");
    else
        root1=(-b+sqrt(x))/(2*a);

    root2=(-b-sqrt(x))/(2*a);
   printf("the root1 is =%.6f",root1);
    printf("the root2 is =%.6f",root2);
    return 0;

}
