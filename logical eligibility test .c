#include<stdio.h>
int main(){
int m,p,c,t;
printf("the marks of m,p,c,t");
scanf("%d%d%d%d",&m,&p,&c,&t);
if(m>=60&&p>=50&&c>=40&&t>=180)
printf("you are qualified for admission");
else
printf("you are not qualified");
return 0;
}