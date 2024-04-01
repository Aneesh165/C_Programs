#include<stdio.h>
int main(){
	int n,r,temp,sum=0;
	char string;
	do{
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r*r);
		n=n/10;
	}
	if(temp==sum){
		printf("%d is an armstrong number",temp);
	}
	else{
		printf("%d is not armstrong number",temp);
	}
	printf("\nDo you want to check another number(y/n)?");
	scanf(" %c",&string);
}while(string=='y'||string=='Y');
}
