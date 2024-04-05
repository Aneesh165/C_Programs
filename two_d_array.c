#include<stdio.h>
int main()
{
	int array[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
	
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
		    printf("arr[%d][%d] = %d\n",i,j,array[i][j]);
	    }
	}
}
