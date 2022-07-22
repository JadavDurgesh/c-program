#include<stdio.h>
int main()
{
    int a=102,*p,**q;
    
    p=&a;
    q=&p;
    
       printf("%d\n",p);//6487572
       printf("%d\n",*p);//102
       printf("%d\n",q);//6487560
       printf("%d\n",**q);//102
	return 0;
}
