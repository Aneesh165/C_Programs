#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter the Alphabet:");
	scanf("%c",&alpha);
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
	{
		printf("%c is vowel",alpha);
	}
	else{
		printf("%c is not a vowel",alpha);
	}
}
