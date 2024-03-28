#include<stdio.h>
int main()
{
	char opera;
	int a,b;
	printf("select an operator(+,-,*,/,)");
	scanf("%c",&opera);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(opera){
 		case'+': printf("sum is : %d",a+b);
		  break; 
		case'-': printf("sum is : %d",a-b);
		  break; 
		case '*': printf("sum is : %d",a*b);
		  break;
	    case '/': printf("sum is : %d",a/b);
		break;    
		default: printf("Invalid operators!!");
		break;
	}
}
