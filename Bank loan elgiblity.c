#include<stdio.h>
int main(){
int age,income,score;
printf("the age of customer is.");
scanf("%d",&age);
printf("the income and credit score of customer.");
scanf("%d%d",&income,&score);
if ((age>=21&&age<=60)&&(income>=25000)&&(score>=700))
printf("you are elgib for bank loan");
else
printf("you are not elgible for bank loan");
return 0;
}