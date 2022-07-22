#include<stdio.h>
int sum(int x) 
{
    if(x>0)
    {
       return x+sum(x-1);
	}
}
int main()
{
	printf("%d",sum(3));
}
