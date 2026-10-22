#include<stdio.h>
#include<math.h>
int main(){
	int s,a,b,c,area;
	printf("the value a,b,c is.");
	scanf("%d%d%d",&a,&b,&c);
	printf("the s value is %d\n",s=(a+b+c)/2);
	printf("the value of area is %d",area=sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
