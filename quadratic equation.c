#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,D,x;
printf("the value of a,b,c is.");
scanf("%d%d%d",&a,&b,&c);
if (a==0)
{
printf("there is no roots for quadratic equation");
}
else
{
x=(-b+-sqrt(b*b-4*a*c))/2*a;
printf("the roots are %d,%d\n",x);
D=b*b-4*a*c;
if (D>0)
printf("roots are real and distinct");
else if(D=0)
printf("roots are real and equal");
else
printf("roots are complex");
}
return 0;
}