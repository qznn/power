#include <iostream>

using namespace std;
int i;
int Ack(int m,int n)
{
    if(m==0&&n>0)   {i++; return n+1; }
    if(n==0&&m>0)   {i++; return Ack(m-1,1);}
    if(m>0&&n>0)    {i++; return Ack(m-1,Ack(m,n-1));}
}
int main()
{
     int m,n;
     cin>>m>>n;
     cout<<Ack(m,n)<<endl;
     cout<<"nAckNum="<<i;
    return 0;
}

