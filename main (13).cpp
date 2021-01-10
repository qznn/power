#include <iostream>

using namespace std;

int main()
{
    int i=0,j=0,n;
    cin>>n;
    while(n!=0)
       {if(n>0)
         i++;
        if(n<0)
         j++;
         cin>>n;
       }
    cout<<"positive integers are "<<i;
    cout<<" and negetive integers are "<<j<<endl;
    return 0;
}


