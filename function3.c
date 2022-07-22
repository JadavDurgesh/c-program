#include<stdio.h>
int fun(int x)
     
 {
	     
     int row,col;
   printf ("%d\n",x);
     
     for(row=1;row<=5;row++)
     
     {
     	for(col=1;col<=5;col++)
     	{
     		printf ("*");
		 }
		 printf("\n");
	 }	 
}
int main()

{
    int n;
	
	printf ("enter the num");
	scanf ("%d",&n);
	
	fun(n);
	return 0;
}
