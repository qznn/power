#include <iostream>
using namespace std;
int count;
void Move(int n,char a,char b)
{
  count++;
  cout<<count<<":"<<" Move "<<n<<" from "<<a<<" to "<<b<<endl;
}
void Hanoi(int n,char a,char b,char c)
{
    if(n==1)
      {
          Move(n,a,b);
      }
    else
     {
       Hanoi(n-1,a,c,b);
       Move(n,a,b);
       Hanoi(n-1,c,b,a);
     }
}
int main()
{
    int n;
    cin>>n;
    Hanoi(n,'A','B','C');
    return 0;
}

