#include<stdio.h>
int main (void)
{
	int m,max,i;
	int p=0;
	int a[20];
	int b[20];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{b[i]=a[i];
	}
	for(i=0;i<m;i++)
	{if(b[i]<0)
	b[i]=-b[i];
	}
	max=b[0];
	for(i=1;i<m;i++)
	{if(max<b[i])
{max=b[i];
p=i;
	}	}
	printf("%d",a[p]);
 } 
