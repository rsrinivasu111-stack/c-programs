#include<stdio.h>
int main()
{
    int x;
    printf("enter x value");
    scanf("%d",&x);
    switch(x==0)
    {
        case 1 : printf("it is an even number");
                break;
        case 0 : printf("it is an odd number");
                break;
    }
    return 0;
}
