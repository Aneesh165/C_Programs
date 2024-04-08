#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	printf("Enter the string:");
	scanf("%s",&str);
	printf("Reverse of the string is : %s", strrev(str));

}
