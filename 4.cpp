#include <stdio.h>

int main(void)
{
	int height,length,width,volume,weight;
	printf("�������ӵĸߣ�");
	scanf("%d",&height);
	printf("�������ӵĳ���");
	scanf("%d",&length);
	printf("�������ӵĿ�");
	scanf("%d",&width);
	volume =height*length*width;
	weight=(volume+165)/166;
	printf("%d,%d,%d\n",height,length,width);
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	return 0;
 } 
