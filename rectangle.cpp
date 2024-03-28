#include<stdio.h>
int main()
{
    int l,b,area,perimeter;	
	printf("Enter the length :");
	scanf("%d",&l);
	printf("Enter the breadth :");
	scanf("%d",&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("Area of this rectangle is:%d\t",area);
	printf("Perimeter of the rectangle is :%d",perimeter);
	
}
