#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="hi ";
	int length=0;
	int i;

    for(i=0;s1[i]!='\0';i++)
    {
    	length++;
	}
	printf("%d",length);
}
