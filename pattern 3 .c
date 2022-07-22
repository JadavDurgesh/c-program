#include<stdio.h>
int main()
{
	int i,j ,num=1;
	for (i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf (" ");
		}
		for(j=i;j<=10;j++)
		{
			printf("$ ");
		}
		printf("\n");
	}
}
