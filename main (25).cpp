#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Point
{
public:
    Point(int c=0,int d=0)
    {
        x=c;
        y=d;
    }
    Point(Point &p)
    {
        x=p.x;
        y=p.y;
    }
    ~Point()
    {
        cout<<"Point xigou "<<x<<" "<<y<<endl;
    }
    int GetX() {return x;}
    int GetY() {return y;}
private:
    int x,y;
};
class Ellipse
{
public:
    Ellipse(int xx1,int yy1,int xx2,int yy2);
    Ellipse(Point &p1,Point &p2);
    ~Ellipse();
    double Area();
    void Show();
private:
    Point a,b;
};
Ellipse::Ellipse(int xx1,int yy1,int xx2,int yy2):a(xx1,yy1),b(xx2,yy2)
{
    cout<<"gouzao 1 "<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
}
double Ellipse::Area()
{
    double area;
    area=(3.1415*fabs(b.GetX()-a.GetX())*fabs(b.GetY()-a.GetY()))/4;
    return area;
}
Ellipse::Ellipse(Point &p1,Point &p2):a(p1),b(p2)
{
   cout<<"gouzao 2 "<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
}
Ellipse::~Ellipse()
{
    cout<<"Ellipse xigou"<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
}
void Ellipse::Show()
{
    cout<<a.GetX()<<" "<<a.GetY()<<" "<<b.GetX()<<" "<<b.GetY()<<endl;
}
int main()
{
   int x1,y1,x2,y2,x3,y3,x4,y4;
   cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
   Ellipse e1(x1,y1,x2,y2);
   Point p1(x3,y3);
   Point p2(x4,y4);
   Ellipse e2(p1,p2);
   e1.Show();
   e2.Show();
   cout<<fixed<<setprecision(4)<<e1.Area()<<endl;
   cout<<fixed<<setprecision(3)<<e2.Area()<<endl;
    return 0;
}

