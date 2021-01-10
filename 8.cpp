#include <stdio.h>
int main (void)
{
	int a;
	int i=2;
	scanf ("%d",&a);
	for(i;i<a;i++)
	if(a%i==0)
	break;
	if(i==a)
	printf("%d是素数",a);
	else
	printf("输入的数字不是素数");
	return 0; 
	
 } 
