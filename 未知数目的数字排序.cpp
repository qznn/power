#include<stdio.h>
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
	int l;
	l=i-1;
	for(i=0;i<=l;i++)
	{int x;	
	for(x=i+1;x<=l;x++)
	{int z,y;
	y=a[i];
	z=a[x];
	if(a[i]<=a[x])
	;
	else
	{a[i]=z;a[x]=y;}
	}
	}
	int m=0;
	for(m;m<=l;m++)
	{printf("%d ",a[m]);
	}
	printf("\n");
	return 0;
 } 
