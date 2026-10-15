#include<stdio.h>
int main(){
	int a,b;
	printf("the value of a,b is");
	scanf("%d%d",&a,&b);
	printf("the value is%d",b++ -a-- +--a - --b);
	return 0;
	
}
