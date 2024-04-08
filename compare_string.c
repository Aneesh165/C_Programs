#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("Enter the first String:");
	scanf("%s",&str1);
	printf("Enter the second String:");
	scanf("%s",&str2);
	if(strcmp(str1,str2)==0)
	{
		printf("strings are same");
	}
	else
	{
		printf("strings are not same");
	}
	
}
