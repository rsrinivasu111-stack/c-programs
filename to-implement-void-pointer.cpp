#include<stdio.h>
int main()
{
    int x=10;
    char ch='A';
    void *p;
    p=&x;
    printf("value of p=%d",*(int*)p);
    p=&ch;
    printf("\nvalue of p=%c",*(char*)p);
    return 0;
}
