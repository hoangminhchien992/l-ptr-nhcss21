#include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	char str[1000];
	fptr=fopen("bt01.txt","a");
	if(fptr==NULL)
	{
		printf("Loi tap tin.");
		return 1;
	}
	else
	{
		printf("Moi ban nhap :");
		fgets(str,1000,stdin);
		fprintf(fptr," %s",str);
	}
	fclose(fptr);
	printf("Da them vao tap tin ");
	return 0 ;
}