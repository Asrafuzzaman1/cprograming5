#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180

int main()
{
    float x,y;
    int angle;
    angle =0;
     printf("angle     cos(angle)\n\n");

     while(angle<=MAX)
     {
         x=(PI/MAX)*angle;
         y=cos(x);
         printf("%d   %f\n",angle,y);
         angle=angle+10;
     }

}
