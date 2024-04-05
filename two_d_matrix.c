#include<stdio.h>
int main()
{	
	int i,j;
	int array[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		   printf("arr[%d][%d]=",i,j);
		   scanf("%d",&array[i][j]);
	    }
	}
	printf("\nEntered Elements are:\n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
		    printf(" %d\t",array[i][j]);
	    }
	}
}
