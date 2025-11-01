#include<stdio.h>
int main()
{
    int x=10;
    char ch='A';
    float pi=3.14;
    double p=1234.098;
    long int q=1556515;
    printf("x=%d",x);
    printf("\nchar=%c",ch);
    printf("\nfloat=%f",pi);
    printf("\ndouble=%lf",p);
    printf("\nlong int=%ld",q);
    printf("\nadress of x=%u",&x);
    return 0;
}
