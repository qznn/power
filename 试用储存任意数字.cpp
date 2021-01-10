#include <stdio.h>
int main (void)
{
	int i=0;
	
	static int a[1];
	while(1)
	{scanf("%d",&a[i]);
	i++;

	if(getchar()=='\n')
	break;
	}
	for(i=i-1;i>=0;i--)
	{printf("%d ",a[i]);
	}
	return 0;
}
