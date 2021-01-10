#include <iostream>

using namespace std;

int main()
{
   int n,a,b,c,d,e;
   cin>>n;
if(n>9999)
   {   a=n/10000;
       b=n%10000/1000;
       c=n%10000%1000/100;
       d=n%10000%1000%100/10;
       e=n%10;
   cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
   cout <<5<<endl;}
  else  if(n>999)
    {   a=n/1000;
        b=n%1000/100;
        c=n%1000%100/10;
        d=n%10;
        cout <<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cout <<4<<endl;}
   else if(n>99)
   {    a=n/100;
        b=n%100/10;
        c=n%10;
        cout <<a<<" "<<b<<" "<<c<<endl;
        cout <<3<<endl;}
    else if(n>9)
    {   a=n/10;
        b=n%10;
        cout <<a<<" "<<b<<endl;
        cout <<2<<endl;}
    else {cout<<n<<endl;
          cout<<1<<endl;}
          return 0;
}


