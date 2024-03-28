#include<stdio.h>
int main()
{
	int si,p,r,t;
	printf("Enter the principle:");
	scanf("%d",&p);
	printf("Enter the rate:");
	scanf("%d",&r);
	printf("Enter the time:");
	scanf("%d",&t);
    si= (p*r*t)/100;
	printf("the Simple Interest is:%d",si);
}
