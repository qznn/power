#include <iostream>
using namespace std;
int fun(int i)
{
  int a,b,c;
     a=i/100;
     b=i%100/10;
     c=i%10;
  if(i==a*a*a+b*b*b+c*c*c)
    return 1;
  else return 0;
}
int main()
{  int m,n,a;
   cin>>m>>n;
   cout<<"Input m: "<<"Input n: ";
    for(a=m;a<=n;a++)
      {
        if(fun(a)==1) cout<<a<<endl;
      }
    return 0;
}


