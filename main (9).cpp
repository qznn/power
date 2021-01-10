#include <iostream>
#include<string.h>
using namespace std;
int Count(char *Str,char *Substr)
{
    int ncount=0,key=1,I,J;
    int len=strlen(Str);
    int length=strlen(Substr);
        for(int i=0;i<len;i++)
          {
             if(*(Str+i)==*(Substr)&&length==1)
                ncount++;
             else if(*(Str+i)==*(Substr))
                for(I=i+1,J=0;I<i+length;I++,J++)
                    {
                       if(*(Str+I)!=*(Substr+J))
                          key=0;
                    }
                 if(key==1) ncount++;
          }
return ncount;
}
int main()
{
    char Str[100],Substr[100];
    cin.getline(Str,100);
    cin.getline(Substr,100);
    int num=Count(Str,Substr);
    cout<<num;
    return 0;
}

