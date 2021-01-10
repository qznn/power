#include <stdio.h>
int main (void)
{
	int i;
	scanf("%d",&i);
	for(;i>0;i--)
	{
		unsigned long int a,b,c;
		unsigned long int max;
		unsigned long int A,B,C,MAX;
		unsigned long int m;
		scanf("%lu %lu %lu",&a,&b,&c);
		A=a*a;B=b*b;C=c*c;
		
		{
		if(a>=b)
		max=a;
		else
		max=b;
	   }
	  {
	  if(max>=c)
	  max=c;
	  else
	  max=c;	
	  }             //找出a,b,c中的最大值 
	  MAX=max*max;
	  m=A+B+C-MAX;
	  if(MAX==m)
	  printf("Yes\n");
	  else
	  printf("No\n");
		
		
	}
	return 0;
 } 
