#include<stdio.h>
int main()
{
	int ptr;
	
	ptr = (int*) malloc(20*sizeof(int));
	  if(ptr==NULL)
	  {
	  	printf("memory allocted...!");
	  }
	  else
	  {
	  	printf("memory not allocted...!");
	  }
	
}
