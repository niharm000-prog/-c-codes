#include<stdio.h>
int main(){
int a,b,c,d,max,min;	
printf("the value if a,b,c,d is");
scanf("%d%d%d%d",&a,&b,&c,&d);
max=a;
min=a;
if (b>max)
{
max=b;
}
if (c>max)
{
max=c;
}
if(d>max)
{
max=d;
}
printf("max is %d\n",max);
if (b<min)
{
min=b;
}
if(c<min)
{
min=c;
}
if(d<min)
{
min=d;
}
printf("min is %d",min);
return 0;	
}
