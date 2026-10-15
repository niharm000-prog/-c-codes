#include<stdio.h>
int main(){
int a,b;
char ch;
printf("the value of a,b is");
scanf("%d%d",&a,&b);
printf("ther value iof operant");
scanf(" %c",&ch);
switch(ch){

case'+':
	printf("sum is %d",a+b);
	break;
case'-':
	printf("sum is %d",a-b);
	break;
case'*':
	printf("sum is %d",a*b);
	break;
case'/':
	if (b!=0)
	printf("sum is %d",a/b);		
    else
    printf("invalid");
    break;
    default:
    	printf("input is invalid");
    }
return 0;	
}
