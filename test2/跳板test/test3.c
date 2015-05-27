#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#define PASSWORD "1234567"
int isRight(char *pass){
	int flag;
	char buffer[44];
	flag=strcmp(pass,PASSWORD);
	strcpy(buffer,pass);
	return flag;
}
int main(){
	int pflag=0;
	char password[1024] ;
	FILE *fp;
	LoadLibrary("user32.dll");
	if(!(fp=fopen("pass.txt","rw+"))){
		printf("file not open\n");
		exit(0);
	}
	fscanf(fp,"%s",password);
	printf("%s\n",password);
	pflag=isRight(password);
	if(pflag){
		printf("wrong password\n");
	}else{
		printf("Congratulations,you're right\n");
	}
	fclose(fp);
return 0 ; }