#include <iostream>

using namespace std;

int main()
{
   int n,a1,a2,b1,b2,m=0;
   for(n=1000;n<=2000;n++)
   {
       a1=n/1000;
       a2=(n-a1*1000)/100;
       b1=n%100/10;
       b2=n%10;
       if(a1+a2==b1+b2)
       {
          m=m+1;
          cout<<n<<" ";
       }
   }
    cout << endl;
    cout <<m<<endl;
    return 0;
}

