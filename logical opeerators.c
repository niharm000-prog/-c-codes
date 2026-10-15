#include<stdio.h>
int main(){
int a=10,b=20,c=30;
printf("the answer is %d\n",(a==10)&&(b>c));
printf("the answer is  %d\n",(a==10)&&(b<c));
printf("the answer is %d\n",(a<b)||(a>c));
printf("the answer is %d\n",(a>b)||(a>c));
printf("the answer is %d\n",!(a==10));
printf("the answer is %d\n",!(a!=10));
return 0;
}
