
#include<stdio.h>
int main()
{
	int a[100],size,max,i;
	
	printf ("enter the num:\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		 scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=0;i<size;i++)
	
{
		if(a[i]>max)
	{
	    max=a[i];
	}
}
	printf("%d",max);
	return 0;
}
