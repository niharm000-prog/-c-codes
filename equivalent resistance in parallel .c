#include<stdio.h>
int main(){
float R,r1,r2;
printf("the value of r1,r2 is:");
scanf("%f%f",&r1,&r2);
printf("the value of equivalent resistance is %f ohm",R=(r1+r2)/r1*r2);
return 0;
}