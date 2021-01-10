#include<stdio.h>
bool sushu(int a)
{int i=2;
for(i;i<a;i++)
{if(a%i==0)
{return false;break;}
if(i==a)
return true;
}
}
int main (void)
{
	int shuzi;
	int a;
	scanf("%d",&shuzi); int c=shuzi;
	for(a=2;a<=shuzi;a++)
	{if(sushu(a))
	 {int b=1; 
	 
	 for(b;;b++)
	 {if(c%(a^b)==0)
	 c=shuzi/(a^b);
	 else
	 break;
	 }
	 for(b;b>=1;b--)
	 {printf("*%d",a);}}
	}return 0;
}
