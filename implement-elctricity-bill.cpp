#include<stdio.h>
int main()
{
    int units;
    float amount,charge,total;
    printf("enter total units consumed");
    scanf("%d",&units);
    if(units<=50)
    {
        amount=units*2.00;
        charge=20;
    }
    else if(units<=100)
    {
        amount=units*2.50;
        charge=25;
    }
    else if(units<=200)
    {
        amount=units*3.00;
        charge=30;
    }
    else if(units<=300)
    {
        amount=units*3.50;
        charge=35;
    }
    else
    {
        amount=units*4.00;
        charge=40;
    }
    total=amount*charge;
    printf("total=%.2f",total);
    return 0;
}
