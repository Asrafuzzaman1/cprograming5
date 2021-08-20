#include<stdio.h>

{
    double a,b,c,s,area;
    printf("enter the value of tringle of arm a,b and c :");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area is= %lf",area);


return 0;



}
