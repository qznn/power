#include <iostream>

using namespace std;

int main()
{ int a,b,c;
   char ch;
   cin>>a>>b>>ch;
   while(1)
   {  if(a==0&&b==0) break;
      else
     switch(ch)
      {
         case '+':c=a+b;cout<<c<<endl;break;
         case '-':c=a-b;cout<<c<<endl;break;
         case '*':c=a*b;cout<<c<<endl;break;
         case '/':
           {if(b!=0)
              {c=a/b;cout<<c<<endl;break;}
            else {cout<<"Error"<<endl;break;}
           }
         case '%':c=a%b;cout<<c<<endl;break;
         default:cout<<"Error"<<endl;
      }
      cin>>a>>b>>ch;
   }

return 0;
}

