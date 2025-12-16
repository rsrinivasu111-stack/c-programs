#include<stdio.h>
void mul(int,int);
int main()
{
    int a,b;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    mul(a,b);
    return 0;
}
void mul(int a,int b)
{
    printf("multiplication is = %d",a*b);
}
