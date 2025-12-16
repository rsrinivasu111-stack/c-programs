#include<stdio.h>
void display(int marks[]);
int main()
{
    int marks[] = { 10,20,30,40,50 };
    display(marks);
    return 0;
}
void display(int marks[])
{
    int i;
    printf("display array values");
    for(i=0;i<5;i++)
    {
        printf(" %d",marks[i]);
    }
}
