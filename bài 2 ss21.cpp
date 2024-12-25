include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL)
	{
		printf("Loi tap tin");
		return 1;
	}
	int str=fgetc(fptr);
	if(str!=NULL)
	{
		printf("%c",str);
	}
	else
	{
		printf("rong");
	}	
	fclose(fptr);			
	return 0 ;
}