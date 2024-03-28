#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("A:%d \t B:%d",a,b);

}
