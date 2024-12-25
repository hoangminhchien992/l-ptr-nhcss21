#include<stdio.h>

int main(){
	FILE *fptr;
	char str[100];
	fptr = fopen("bt01.txt","r");
	if(fptr==NULL)
	{
		printf("Loi tap tin");;
		return 1;
	}
	if(fgets(str,sizeof(str),fptr))
	{
		printf("dong dau : %s",str);
	}
	fclose(fptr);
	return 0 ;
}