#include<stdio.h>
#include<string.h>
int main()
{
	char s[11]="Hello World";
	int i,count=0;
	while(i<11)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			count++;
		}
		i++;
	}
	printf("The number of Vowels are:%d",count);
}
