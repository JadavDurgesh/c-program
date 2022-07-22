#include<stdio.h>
int main()
{
	FILE *file1;
	int age=22;
	
//	printf("enter the age..");
//	
//	
   
  file1=fopen("dugesh .txt","w");
   file1=fopen("dugesh .txt","a");
   fprintf(file1,"%d",age);
   fclose(file1);
   
    file1=fopen("durgesh.txt","r");
    fscanf("%d",&age);
    printf("%d",age);
}
