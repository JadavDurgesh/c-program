#include <stdio.h>
int main()
{
	int n=121,rem,reverse_num=0;
	int num=n;
	 while (n!=0)
	 {
	 	rem = n%10;
	 	reverse_num=rem+reverse_num*10;
	 	n=n/10;
	 	if(num==reverse_num)
	 	{printf ("num is palindrome ");
		 }
	 }
}
