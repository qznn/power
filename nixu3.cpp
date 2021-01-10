#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,s;
    cin>>a;
    b=a/1000;
    c=a%1000/100;
    d=a%1000%100/10;
    e=a%10;
    s=e*1000+d*100+c*10+b;
    cout <<s<< endl;
    return 0;
}

