#include<stdio.h>
int main()
{
	int arr[]={5,6,8,9,10};
	int max=arr[0],i;
	
	for(i=0;i<5;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
  printf("%d",max);
}
