//2015/5/17 0:49:58
#include<iostream>
#include<stdio.h>
#include<cstring>
#define PASS "1234567"

using namespace std;
int isright(char *a){
char pass[9];
int flag = strcmp(PASS,a);
strcpy(pass,a);
return flag;
}
int main(){
char buffer[1024];
while(true){
    cout<<"please enter the code"<<endl;
    scanf("%s",buffer);
    //char pass1[9]={'a','a','a'};
    //int passflag = strcmp(PASS,buffer);//
    //strcpy(pass1,buffer);
    int passflag1 = isright(buffer);
    if(passflag1){
        cout<<"code is wrong"<<endl;
        //cout<<pass<<endl;
        //strcpy(pass,buffer);
    }else{
        cout<<"Congratultions,the code is right"<<endl;
        //strcpy(pass,buffer);
        break;
    }
}
return 0;
}
