#include<stdio.h>
#include<math.h>
int main(){
	int d,x1,x2,y1,y2;
	printf("the value x1 and x2 and y1,y2 is.");
	scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	printf("the d value is %d",d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
	return 0;
}
