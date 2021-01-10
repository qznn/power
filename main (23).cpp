#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Time
{
private:
    int hour,minute,second;
public:
    Time(int h,int m,int s=0);
    Time(int s=0);
    int SecCalc(){return(hour*60+minute)*60+second;}
    void SetTime(int h=0,int m=0,int s=0);
    void print_12();
    void print_24();
    Time Add(Time &);
    Time Sub(Time &);
};
Time::Time(int h,int m,int s)
{
    hour=h;
    minute=m;
    second=s;
}
Time::Time(int s)
{
    hour=s/3600;
    minute=(s-hour*3600)/60;
    second=s-hour*3600-minute*60;
}
void Time::SetTime(int h,int m,int s)
{
    hour=h;
    minute=m;
    second=s;
}
void Time::print_12()
{   if(hour<=12)
        cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<":"<<setw(2)<<setfill('0')<<second<<" "<<"AM";
    if(hour>12)
        cout<<setw(2)<<setfill('0')<<hour-12<<":"<<setw(2)<<setfill('0')<<minute<<":"<<setw(2)<<setfill('0')<<second<<" "<<"PM";
}
void Time::print_24()
{
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<":"<<setw(2)<<setfill('0')<<second;
}
Time Time::Add(Time &t)
{
   Time tt;
   tt.second=second+t.second;
   tt.minute=tt.second/60+minute+t.minute;
   tt.second=tt.second%60;
   tt.hour=tt.minute/60+hour+t.hour;
   tt.minute=tt.minute%60;
   tt.hour=tt.hour%24;
   return tt;
}
Time Time::Sub(Time &t)
{
    int s=fabs(this->SecCalc()-t.SecCalc());
    Time tt(s);
    return tt;
}
int main()
{
    Time t1(2,34),t2,t3(3723);
    t2.SetTime(13,23,34);
    cout<<"t2:";
    t2.print_12();
    cout<<endl<<"t2:";
    t2.print_24();
    cout<<"\nt1+t2:";
    t1.Add(t2).print_24();
    cout<<"\nt1-t2:";
    t2.Sub(t1).print_24();
    cout<<endl<<"t3:";
    t3.print_24();
    return 0;
}

