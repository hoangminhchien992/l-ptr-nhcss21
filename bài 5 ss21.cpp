#include<stdio.h>
#include<string.h>
int main(){
	int line;
	char str[100];
	char read[1000]={0};
	FILE  *fptr;
	fptr = fopen("bt05.txt","w");
	if(fptr==NULL)
	{
		printf("Tap tin loi.");
		return 1;
	}
	printf("Moi ban nhap so dong :");
	scanf("%d",&line);
	str[line];
	for(int i = 0 ; i < line ; i++)
	{
		printf("dong %d:\n",i+1);
		fflush(stdin);
		fgets(str,100,stdin);
		fprintf(fptr,"%s",str);
	}
	fclose(fptr);
	fptr = fopen("bt05.txt","r");
	if(fptr==NULL)
	{
		printf("Tap tin loi.");
		return 1;
	}
	printf("cac dong co trong file:\n");
	while(fgets(read,sizeof(read),fptr) != NULL)
	{
		printf("%s \n",read);
	}
	fclose(fptr);
	return 0 ;
}