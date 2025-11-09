#include<stdio.h>
int main()
{
    int x ;
    printf ("enter x value");
    scanf ("%d",&x);
    switch (x>0)
    {
        case 1 : printf ("It is a positive value");
        break ;
        case 0 : printf("It is a negative value");
        break;
    }
    return 0;
}

