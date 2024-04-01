#include<stdio.h>
int main(){
	int a,b,choice;
	char string;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	do{
	printf("press 1 to Add %d and %d\n",a,b);
	printf("press 2 to Subtract %d and %d\n",a,b);
	printf("press 3 to Multiply %d and %d\n",a,b);
	printf("press 4 to Divide %d and %d\n",a,b);
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
{
	case 1:
		printf("sum is: %d",a+b);
		break;
	case 2:
		printf("sum is: %d",a-b);
		break;
	case 3:
		printf("sum is: %d",a*b);
		break;
	case 4:
		printf("sum is: %d",a/b);
		break;
	default:
		printf("Invalid choice!");
}
printf("\nDoyou want to continue:(y/n)\n");
scanf("%s",&string);
}while(string=='y' || string=='Y');
}

