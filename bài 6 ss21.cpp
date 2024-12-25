#include<stdio.h>
#include<process.h>
int main(){
	FILE *fptr1;
	FILE *fptr2;
	fptr1 = fopen("bt06.txt","w");
	fptr2 = fopen("bt01.txt","r");
	if(fptr1==NULL)
	{
		printf("Tap tin loi");
		return 1;
	}
	if(fptr2==NULL)
	{
		printf("Tap tin loi");
		return 1;
	}
	char cpy;
	if(cpy=fgetc(fptr2)!= EOF)
	{
		fputc(cpy,fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("da copy");
	
	return 0 ;
}