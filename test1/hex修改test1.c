#include<stdio.h>
#include<string.h>
#define PASS "iloveher"
int isright(char *pass){
	int flag;
	flag =strcmp(pass,PASS);
	return flag;
}
int main(){
	int vflag=0;
 	 char password[1024];
 	 while(1) {
 	 	 printf("please input the password:\n");
 	 	 	scanf("%s",password);
 	 	 	vflag= isright(password);
 	 	 	if (vflag) {
 	 	 		printf("password is weong\n");
 	 	 	}else{
 	 	 		printf("Congratulations,code is right\n");
 	 	 	break;
 	 	 	}
 	 }
 	 return 0;
 } 