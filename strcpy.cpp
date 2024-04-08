#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Hello";
	char str2[20];
	
	printf("After copy is %s",strcpy(str2,str1));
}
