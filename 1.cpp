#include<stdio.h>

int main(void)
{
	printf("请输入球的半径r,单位m");
	int r,V;
	scanf("%d",&r);
	V=r*r*r*(4.0f/3.0f);
	printf("%d\n",r);
	printf("V=%d立方米",V);
	return 0; 
 } 
