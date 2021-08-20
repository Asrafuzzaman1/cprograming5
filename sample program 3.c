#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00
int main()
{
    int year;
    float value,amount,inrate;
    amount=PRINCIPAL;
    inrate=0.11;
    year=0;
    printf(" year    amount\n");
    while(year<=PERIOD)
    {
        value = amount+(inrate*amount);
        year=year+1;
        amount=value;
        printf("%d   %f\n",year,amount);
    }
}
