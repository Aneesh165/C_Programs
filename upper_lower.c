#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	printf("Enter the string:");
	scanf("%[^\n]",&str1);
	
	printf("UpperCase : %s",strupr(str1));
	
	printf("\nLowerCase : %s",strlwr(str1));
}
