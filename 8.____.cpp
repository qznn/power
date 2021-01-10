#include <iostream>
using namespace std;

int main()
{
   int a,b,c;
   int n;
    cin>>a>>b>>c;
    bool flag=false;
    n=10;
    while(n<=100)
    {
        if(n%3==a && n%5==b && n%7==c)
        {
            cout<<n<<endl;
            flag=true;
            break;
        }
        n++;
    }
    if(n>100) cout << "No answer!" << endl;
    return 0;
}

