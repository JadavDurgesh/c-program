#include<stdio.h>
int main()
{
	fun(2,4);
	
	fun(7,4);
	
	fun(5,6);
	return 0;
}
 int fun(int num1, int num2)
 {
 	int max;
 	max = (num1>num2) ? num1:num2;
 	printf ("%d\n",max);
 }
