#include<stdio.h>
int fnb(int a1,int a2){
int b1,b2;
b1=a1+a2;b2=a1-a2;
return b1*b2;
}
int fna(int v1,int v2){
int a1;
a1=fnb(v1,v2)+v1;
return a1;
}
int main(){
int vm;
vm=fna(4,3);
printf("%d\n",vm);
return vm;
}
