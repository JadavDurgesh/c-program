#include<stdio.h>
int main()
{
	int arr[20]={1,12,14,85,10,2,4};
	int i,j,temp;
	
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(arr[i]>arr[j]);
		{
		
		  temp=arr[i];
		  arr[i]=arr[j];
		  arr[j]=temp;
    	}
        }
   }
   for(i=0;i<8;i++)
   {
   	printf("%d ",arr[i]);
   }
}
