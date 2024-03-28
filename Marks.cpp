#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the Marks:");
	scanf("%d",&mark);
	if(mark>=85&&mark<=100){
		printf("A+");
	}
	else if(mark>=75&&mark<85){
		printf("B+");
	}
	else if(mark>=65&&mark<75){
		printf("C+");
	}
	else if(mark>=55&&mark<65){
		printf("D+");
	}
	else if(mark<55){
		printf("failed");
	}
	else{
		printf("Invalid marks");
	}
}

