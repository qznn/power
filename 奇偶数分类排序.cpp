#include<stdio.h>
int main (void)
{int o=1,r;
scanf("%d",&r); 
for(o;o<=r;o++)
{
	int i=0;
	static int a[1];
	while(1)
	{scanf("%d",&a[i]);
	i++;
	if(getchar()=='\n')
	break;
	}
	
    int b[i-1],c[i-1];
	int x=0,y=0;
	int m,n;
	for(i=i-1;i>=0;i--)
	  {
	if((a[i]%2)==0)
	{c[y]=a[i];y++;	}
	if((a[i]%2)==1)
	{b[x]=a[i];x++;	}
		
	  }
	 
	  
	   
	  for(i=0;i<=x-1;i++)
	{int p;	
	for(p=i+1;p<=x-1;p++)
	{int z,w;
	w=b[i];
	z=b[p];
	if(b[i]<=b[p])
	;
	else
	{b[i]=z;b[p]=w;}
	}
	}
	
	  for(i=0;i<=y-1;i++)
	{int p;	
	for(p=i+1;p<=y-1;p++)
	{int z,w;
	w=c[i];
	z=c[p];
	if(c[i]<=c[p])
	;
	else
	{c[i]=z;c[p]=w;}
	}
	}
	for(n=0;n<x;n++)
	 {printf("%d ",b[n]);
	 }
	
	   for(m=0;m<y;m++)
	 {printf("%d ",c[m]);
	 }
	 printf("\n");
}
	 return 0;
	 
}

	
