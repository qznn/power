#include <iostream>
#include<cstring>
using namespace std;
int wordsearch(char ch,char str[])
{
    int nlength=strlen(str);
    int nwordcount=0;
    int ncount=0;
    for(int i=0;i<nlength;i++)
    {
       if (ch==str[i])
        {
           ncount++;
        }
      if(str[i]==' '||str[i]==','||str[i]=='.')
      {
          if(ncount>0)
          {
              nwordcount++;
              ncount=0;
          }
      }

    }
    return nwordcount;
}
int main()
{
    int ncount=0;
    char ch;
    char str[100];
    cin>>ch;
    cin.get();
    cin.getline(str,100);
    int nlength=strlen(str);
     for(int i=0;i<nlength;i++)
     {
         if(ch==str[i])
            ncount++;
     }

    cout<<ncount<<" "<<wordsearch(ch,str);

    return 0;
}



