#include<stdio.h>
int main()
{
	int i,n,j;
	printf("no.of incrementation:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{	
	     	printf("%d",j+1);
	    }
	    printf("\n");
	}
}
