#include <stdio.h>

int main(void)
{
	int height,length,width,volume,weight;
	printf("输入箱子的高：");
	scanf("%d",&height);
	printf("输入箱子的长：");
	scanf("%d",&length);
	printf("输入箱子的宽：");
	scanf("%d",&width);
	volume =height*length*width;
	weight=(volume+165)/166;
	printf("%d,%d,%d\n",height,length,width);
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	return 0;
 } 
