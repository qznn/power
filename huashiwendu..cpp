#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float F,C;
    cin>>F>>C;
    if(F!=32)
    {
      C=5.0/9*(F-32);
    cout<<fixed<<setprecision(4)<<C<<endl;
    }

    else cout <<"0"<< endl;
    return 0;
}


