#include<stdio.h>
int main(){
int units;
printf("the power consumption units:");
scanf("%d",&units);
if(units>=0&&units<=100)
printf("power consumption bill is %d",units*2);
else if (units>100&&units<=200)
printf("electricity bill is %d",units*3);
else if(units>200)
printf("electricity bill is %d",units*5);
return 0;
}