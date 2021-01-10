#include <stdio.h>

int main(void)
{
	printf("a*x+b*y=c\n");
	printf("d*x+e*y=f\n");
	printf("输入a b c d e f,解二元一次方程\n");
	float a,b,c,d,e,f,x,y;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	x=(c*e-f*b)/(a*e-d*b);
	y=(c*d-a*f)/(b*d-a*e);
	printf("x=%.2f,y=%.2f",x,y);
	return 0; 
 } 
