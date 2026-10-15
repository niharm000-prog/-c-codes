#include<stdio.h>
int main(){
char ch;	
printf("the value of ch is");
scanf("%c",&ch);
if ((ch>='A')&&(ch<='Z'))
{
printf("it is upper case");
}
else if ((ch>='a')&&(ch<='z'))
{
printf("it islower case");
}
else if ((ch>='1')&&(ch<='9'))
{
printf("this is a digit");
}
else
{
printf("it is a symbol");
}
return 0;	
}
