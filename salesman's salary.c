#include<stdio.h>



#define BASE_SALARY 1500

#define BONUS_RATE 200
#define COMMISSION .02
int main()
{
    int quantity;
    float gross_salary,price;
    float bonus,commission;
    printf("input number sold and price\n");
    scanf("%d %f",&quantity,&price);

    bonus = BONUS_RATE*quantity;
    commission=COMMISSION*quantity*price;
    gross_salary= BASE_SALARY+bonus+commission;
    printf("\n");
    printf("bonus =%f\n",bonus);
    printf("commission = %f\n",commission);
    printf("gross_salary = %f\n",gross_salary);
    return 0;
}
