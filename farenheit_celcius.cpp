#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter the fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32)*5/9;
	printf("The temprature in celsius is:%f",celsius);
}
