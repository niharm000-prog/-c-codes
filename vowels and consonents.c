#include<stdio.h>
int main(){
char ch;	
printf("the value if ch is");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='U')
printf("this are vowels");
else
printf("this are consonents");
return 0;	
}
