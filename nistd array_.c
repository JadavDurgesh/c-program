#include<stdio.h>
int main()
{
	int arr[100][100];
	int row,col;
	
	for(row=0;row<2;row++)
    {
    	for(col=0;col<2;col++)
    	{
    		scanf("%d",&arr[row][col]);
		}
	}
	 for(row=0;row<2;row++)
      {
      	for(col=0;col<2;col++)
      	{
      		printf("%d ",arr[row][col]);
    	}
    		printf("\n");
	}
	return 0;	
}
