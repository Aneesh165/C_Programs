#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,a,ci;
	printf("Enter the principle:");
	scanf("%f",&p);
	printf("Rate of interest:");
	scanf("%f",&r);
	printf("Time period:");
	scanf("%f",&t);
	a=p * pow((1+r/100),t);
	ci=a-p;
	printf("Compound interest is:%f",ci);
}
