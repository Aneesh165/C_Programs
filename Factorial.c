#include<stdio.h>
int main()
{
	int num,i,con=1;
	printf("Enter the Number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)

		con=con*i;
		
		printf("factorial is %d",con);

}
