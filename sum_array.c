#include<stdio.h>
int main()
{
	int i,sum=0,array[]={10,20,30,40,50,60};
	for(i=0;i<6;i++)
    {
		sum=sum+array[i];
	}
	printf("%d",sum);
}
