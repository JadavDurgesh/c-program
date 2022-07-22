#include<stdio.h>
int ravi(int x)
{
	int n1,n2,n3,i;
	
	printf("%d %d",n1,n2);
	
	for(i=100;i<x;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		
	}
//	printf("\n");
}
int main()
{
	int p;
	printf("enter the num...");
	scanf("%d",&p);
	ravi(p);
	return 0;
}
