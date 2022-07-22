#include <stdio.h>
int main()
{
    int choice;
    int a=80,b=60;
    
    printf ("ente the choice :\n");
    scanf ("%d",&choice);
	 	
	switch (choice)
{
							    case 1 :
	printf ("%d",a+b);                     
	                                       break;	                             
		                        case 2 :
	printf ("%d",a-b);                     
	                                       break;
		                        case 3 :
	printf ("%d",a*b);                     
	                                       break;
    	                        case 4 :
	printf ("%d",a/b);                     
	                                       break;	}									                                          
										                                          
}
