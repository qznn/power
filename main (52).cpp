#include <iostream>
#define N 100
using namespace std;
void Read(int *a,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i*100+j];
    }
}
int MaxPoint(int a[][100],int m,int n,int result[][3])
{
    int x=0,y=0,z=0,num=0,max,maxx,maxy;
    bool flag=true;
    for(x=0;x<m;x++)
    {
        max=a[x][0];
        maxx=x;
        maxy=0;
        for(y=1;y<n;y++)
        {
            if(a[x][y]>max)
            {
                maxx=x;
                maxy=y;
                max=a[x][y];
            }
        }
     for(z=0;z<m;z++)
      {
         if(max<a[z][maxy])
         {
             flag=false;
             break;
         }
      }
      if(flag)
      {
          result[num][0]=max;
          result[num][1]=maxx+1;
          result[num][2]=maxy+1;
          num++;
      }
      flag=true;
    }
    return num;
}
int main()
{
    int a[N][N],result[N][3];
    int m,n;
    cin>>m>>n;
    Read(*a,m,n);
    int num=MaxPoint(a,m,n,result);
    for(int i=0;i<num;i++)
    {
       cout<<result[i][0]<<" ";
       cout<<result[i][1]<<" ";
       cout<<result[i][2]<<" "<<endl;
    }
  return 0;
}

