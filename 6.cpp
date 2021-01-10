#include<stdio.h>

int main (void)
{
	int i,n;
	scanf("%d",&n);   //n×éÊý¾Ý 
	for(i=0;i<n;i++)
	{
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int NO1,NO2,NO3,NO4;
		int N1,N2;
	
		if(a>=b)
		{
		NO1=a;NO2=b;}
		else
		{
		NO1=b;NO2=a;}
		N1=NO1; 
		if(NO1>=c)
		{
		NO3=c;}
		else
		{
		NO1=c;NO3=N1;}
		N2=NO1;
		if(NO1>=d)
		{
		NO4=d;}
		else
		{
		NO1=d;NO4=N2;}
		
        int no2,no3,no4,no5;
        no2=NO2;no3=NO3;no4=NO4;
		 
		if(NO2>=NO3)
		;
		else
		{
		NO2=no3;NO3=no2;}
		no5=NO2;
		if(NO2>=NO4)
		;
		else
		{
		NO2=no4;NO4=no5;}
		
		int x,y;
		
		x=NO3;y=NO4;
		if(NO3>=NO4)
		;
		else
		{
		NO3=y;NO4=x;}
		printf("%d %d %d %d\n",NO4,NO3,NO2,NO1);
		
		
	}
	return 0;
}
 
