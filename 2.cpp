#include<stdio.h>
int main(void) 
{
	int i,x;
	scanf("%d",&i);
    
	if(i<=6)
	printf("ERROR");
	else
	if(i%2!=0)
	printf("ERROR");
	else
{	x=i*0.5; 
              //i为大于6的偶数，可以分解为两个奇数的和
	 
	if(x%2==0)
	x=x-1;
	else
	x=x;
	
	    
		for(x;x>=1;x=x-1)
	{                    //判断两个数是否为奇质数 
		int a[2];
		int b=2;
		int d=2;
		a[1]=x;
		a[0]=i-x;    
	 for(d;d<a[1];d++)
	 if(a[1]%d==0)
	 break;
	if(d==a[1])
	for(b;b<a[0];b++)
		if(a[0]%d==0)
		break;
		if(b==a[0])
		printf("%d %d\n",a[1],a[0]); 
	 }
	  
}
		

	return 0;
}
