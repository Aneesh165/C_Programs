#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int low = 0;
    int high = n - 1;
    int result=-1;
    
    while(low<=high)
    {
    	int mid=low+(high-low)/2;
    	 if (arr[mid] == key)
		  {
            result = mid;
            break;
		  }
         if (arr[mid] < key)
            low = mid + 1; 
        else
            high = mid - 1;
    }

    if (result == -1)
        printf("Element not present in array\n");
    else
        printf("Element found at index: %d\n", result);

}

