#include<stdio.h>
#include<math.h>

 int main()
 {
     float a,b,c,discriminant;
     float root1,root2;
     printf("enter the value of a,b and c :");
     scanf("%f%f%f",&a,&b,&c);
     discriminant=(b*b-4*a*c);
     if(discriminant<0)
        printf("the root1 and root2 are imaginary:");
     else
     root1=(-b+sqrt(b*b-4*a*c))/(2*a);
     root2=(-b-sqrt(b*b-4*a*c))/(2*a);
     printf("root1=%f\n",root1);
     printf("root2=%f\n",root2);
     return 0;
 }
