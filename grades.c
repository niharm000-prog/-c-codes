#include<stdio.h>
int main(){
int grade;	
printf("the value if grade is");
scanf("%d",&grade);
if (grade>=90&&grade<=100)
printf("your grade is a+ ");
else if(grade>=80)
printf("your grade is a");
else if(grade>=70)
printf("your grade is b");
else if(grade>=60)
printf("your grade is c");
else if(grade>=50)
printf("your grade is d");
else if(grade>=40)
printf("your grade is e");
else if(grade<=40)
printf("your grade is fail");
return 0;	
}
