#include<stdio.h>
int main()
{
	int i,max=0,array[]={10,20,30,40,50,60};
	for(i=0;i<6;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("largest is %d",max);
}
