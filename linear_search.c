#include<stdio.h>
int main()
{
	int i, n, result=-1,target;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    
    printf("Enter the element to search :");
    scanf("%d",&target);
    
    for(i=0;i<n;i++)
		if(arr[i]==target)
		{
			result=i;
			break;
	    }
		if(result==-1)
		{
    		printf("Element Not Found");
    		
		}
		else
		{
			printf("Element Found at %d",result);
		}
    
	
}
