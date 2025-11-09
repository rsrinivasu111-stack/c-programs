#include<stdio.h>
#include<math.h>
int main()
{
    float n,s;
    hi:
    printf("enter n value");
    scanf("%f",&n);
    if(n<0)
    goto hi;
    s= sqrt(n);
    printf("square root is = %.2f",s);
    return 0;
}
