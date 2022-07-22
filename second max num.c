#include<stdio.h>
int main()
{
	int arr[]={12,14,45,24,620,780,10};
    int i,second,max=arr[0];
	
	for(i=0;i<7;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d\n", max);
	
	second=arr[0];
	for(i=0;i<7;i++)
	{
		if(arr[i]>second && arr[i]!=max)
         {
         	  second=arr[i];
		 }
	}
	   printf("%d\n",second);
}
