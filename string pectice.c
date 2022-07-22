#include<stdio.h>
int main()
{
	char s1[20]="hi ";
	int leath=0,i;
	for(i=0;s1[i]!='\0';i++)
	{
		leath++;
	}
	printf("%d",leath);
}
