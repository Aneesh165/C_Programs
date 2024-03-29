#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	char s;
	do
	{
		printf("Select an option:\n1.Print Hello\n2.Print World\n3.Exit\n");
    	scanf("%d",&choice);
	
	switch(choice)
	   {
	   	case 1:
	   		printf("Hello\n");
	   		break;
	   	case 2:
	   		printf("World\n");
	   		break;
	   	case 3:
	   		exit(0);
	   		break;
	   	default: 
	   		printf("Invalid choice");
	   }
	   printf("To Repeat press(y)");
	   scanf(" %c",&s);
    }
	while(s=='y'||s=='Y');
}
