#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20]="hi",s2[20]="how do you";
	
	puts(s1);
	strcat(s1,s2);
	puts(s1);
	puts(s2);
}
