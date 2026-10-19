#include<stdio.h>
#include<math.h>
int main(){
float z,R,x1,x2;
printf("the value of accept resistance R inductive reactance x1,capacitive reactance x2 is:");
scanf("%f%f%f",&R,&x1,&x2);
/* the impedence of series RLC circuit is
z=√R^2(x1-x2)^2*/
printf("the impedence of series is %f",z=sqrt((R*R)*pow((x1-x2),2)));
return 0;
}