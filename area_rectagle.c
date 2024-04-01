#include<stdio.h>

float area(float length , float width)
{
	return length*width;
}
int main(){
	float a,b,result;
	printf("Enter the Length and Width:");
	scanf("%f%f",&a,&b);
	result=area(a,b);
	printf("%f",result);
}
