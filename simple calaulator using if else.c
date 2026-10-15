#include<stdio.h>
int main(){
int a,b;
char ch;
printf("the value of a,b is");
scanf("%d%d",&a,&b);
printf("ther value iof operant");
scanf(" %c",&ch);
if (ch=='+')
printf("sum is %d",a+b);
else if (ch=='-')
printf("sum is %d",a-b);
else if (ch=='*')
printf("sum is %d",a*b);
else if (ch=='/')
printf("sum is %d",a/b);
else
printf("invalid input");
return 0;
}
