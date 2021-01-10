#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  float a,b,c,x,area;
  cin>>a>>b>>c;
  if(a+b>c&&a+c>b&&b+c>a)
  {
      x=(a+b+c)/2;
      area=sqrt(x*(x-a)*(x-b)*(x-c));
      cout<<fixed<<setprecision(3)<<area<<endl;
  }
    else cout <<"ERROR" << endl;
    return 0;
}

