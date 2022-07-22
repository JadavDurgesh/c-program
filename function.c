#include<stdio.h>
int main()
{
	fun();
	return ;
	
}
int fun()
{
	int num1,num2,sum;
	
	printf("enter the num");
	scanf ("%d %d",&num1,&num2);
	
	sum = num1+num2;
	printf("%d",sum);
}
