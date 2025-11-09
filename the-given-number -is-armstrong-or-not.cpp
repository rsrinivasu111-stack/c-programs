#include<stdio.h>
int main()
{
    int n,d,c,sum=0,temp;
    printf("entry any value");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        c=d*d*d;
        sum=sum+c;
        n=n/10;
    }
    if(temp==sum)
    printf("it is an armstrong");
    else
    printf("it is not an armstrong");
    return 0;
}
