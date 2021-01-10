#include <stdio.h>
int main (void)
{
	char ch;
	int len=0;
	ch=getchar();
	while(ch!='\n')
	{len++;
	ch=getchar();
	}
	printf("%d",len);
}
