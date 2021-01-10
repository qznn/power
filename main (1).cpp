#include <iostream>
#include<string.h>
using namespace std;
bool Password(char *str)
{
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<16;i++)
    {
        if(str[i]>='A'&&str[i]<='Z') a=1;
        if(str[i]>='a'&&str[i]<='z') b=1;
        if(str[i]>='0'&&str[i]<='9') c=1;
        if(str[i]=='~'||str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^')  d=1;
    }
     if(a+b+c+d>=3)   return 1;
     else return 0;
}
int main()
{
     char str[50];
     cin.getline(str,50);
     int len=strlen(str);
     if(len>=8&&len<=16)
     {
         if(Password(str)==1) cout<<"YES";
         else cout<<"NO";
     }
     else cout<<"NO";
     return 0;
}



