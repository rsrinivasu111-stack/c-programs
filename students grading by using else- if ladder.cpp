#include<stdio.h>
int main()
{
	int s1,s2,s3,tot,per;
	printf("enter s1,s2,s3 values");
	scanf("%d%d%d",&s1,&s2,&s3);
	tot=s1+s2+s3;
	per=tot/3;
	if(per>=90)
	printf("A grade");
	else if(s2>=70)
	printf("B grade");
	else if(per>=50)
	printf("C grade");
	else if(per>=40)
	printf("D grade");
	else
	printf("failed");
	return 0;
}
