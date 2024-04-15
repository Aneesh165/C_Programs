#include<stdio.h>
int main()
{
	int i,n,m,j;
	printf("no.of rows:");
	scanf("%d",&n);
	printf("no.of values:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
	    for(j=1;j<=m;j++)
	    {
	       printf("*");	
		}
	    printf("\n");
	}
}
