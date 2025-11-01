#include<stdio.h>
int main()
{
    int a,b,c,d,e,total,avg;
    float average;
    printf("enter a,b,c,d,e values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg=(float)total/5;
    printf("avg=%f",avg);
    printf("total=%d",total);
    return 0;
}
    
