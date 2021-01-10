#include<stdio.h>
int main(void)
{int i,l=0;
scanf("%d",&i);
for(l;l<i;l++)
	{
	int m,n,a=0;
	scanf("%d %d",&m,&n);
	for(;m<=n;m=m+1)
	{
	int x,y,z,w;
	x=m%10;
	y=m%100;
	z=y/10;
	w=m/100;
	if(m==x*x*x+z*z*z+w*w*w)
	{printf("%d ",m);
	a=a+1;} 
	
	
	}if(a==0)
	printf("-1\n");
	else
	printf("\n");
    }return 0;
}
