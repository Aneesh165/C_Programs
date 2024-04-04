#include<stdio.h>
int main()
{
	int i;
	int array[]={10,20,30,40,50,60};
	printf("%d\n\n",array[0]);
	array[0]=15;
	printf("%d\n\n",array[0]);
	
	for(i=0;i<6;i++)
	{
		printf("%d\n",array[i]);
	}
}
