#include <iostream>
using namespace std;
int read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];
        return 0;
}
void sort(int date[],int n)
{
    int i,j,k,temp;
    for(i=0;i<n;i++)
    {
        k=i;
        for(j=k+1;j<n;j++)
        {
            if (date[j]<date[i]);
            k=j;
        }
            if(k!=i)
            {
                temp=date[k];
                date[k]=date[i];
                date[i]=temp;
            }
    }

}
int date(int date[],int n,int b[],int len)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        b[len]=date[i];
        len++;
        for(j=i+1;j<n;j++)
        {
            if (date[j]!=date[i])
                break;
           else i++,j++;
        }
    }
}
int print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int a[20],b[20];
    read(a,20);
    sort(a,20);
    date(a,20,b,20);
    print(a,20);
    return 0;
}




