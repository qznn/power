#include<stdio.h>
int main (void)
{
 char shuzi[10][50];
 int a,b,c,d,e,f,g,h,i,j;
 scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
 for(a;a>=0;a--)
 {shuzi[0][a]=0;}
 for(b;b>=0;b--)
 {shuzi[1][b]=1;}
 for(c;c>=0;c--)
 {shuzi[2][c]=2;} 
 for(d; d>=0;d--)
 {shuzi[3][d]=3;}
 for(e;e>=0;e--)
 {shuzi[4][e]=4;}
 for(f;f>=0;f--)
 {shuzi[5][f]=5;}
 for(g;g>=0;g--)
 {shuzi[6][g]=6;}
 for(h;h>=0;h--)
 {shuzi[7][h]=7;}
 for(i;i>=0;i--)
 {shuzi[8][i]=8;}
 for(j;j>=0;j--)
 {shuzi[9][j]=9;}
if(a==0)
0
else
{int k=1,l=0;
	for(k;k<=9;)
	{if (shuzi[k][0]!='\0')
	{break;}
	k++;}
	for(l;;)
	{if(shuzi[k][l]=='\0')
	{break;}
	l++;
	}
	printf("%c%s",shuzi[k][0],shuzi[0]);
	for(l=l-2;l>=0;l--)
	{printf("%c",shuzi[k][l]);}
	for(k=k+1;k<=9;k++)
	{printf("%s",shuzi[k]);}
}
return 0;
} 
