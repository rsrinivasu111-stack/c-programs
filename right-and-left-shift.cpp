#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,right,left;
    printf("enter a,b values");
    scanf("%d%d",&a,&b);
    right=a>>b;
    printf("bitwise right shift=%d",right);
    left=a<<b;
    printf("bitwise left shift=%d",left);
    return 0;
}
