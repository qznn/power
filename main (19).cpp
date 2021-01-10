#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Ellipse
{
public:
    Ellipse(int xx1,int xx2,int yy1,int yy2);
    int Getx1() {return x1;}
    int Gety1() {return y1;}
    int Getx2() {return x2;}
    int Gety2() {return y2;}
    double Area();
private:
    int x1,y1,x2,y2;
};
Ellipse::Ellipse(int xx1,int yy1,int xx2,int yy2)
{
    x1=xx1;
    y1=yy1;
    x2=xx2;
    y2=yy2;
}
double Ellipse::Area()
{
    double area;
    area=3.1415*fabs(x2-x1)*fabs(y2-y1)/4;
    return area;
}
int main()
{
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   Ellipse ellipse(x1,y1,x2,y2);
   cout<<ellipse.Getx1()<<" "<<ellipse.Gety1()<<" "<<ellipse.Getx2()<<" "<<ellipse.Gety2()<<endl;
   cout<<fixed<<setprecision(4)<<ellipse.Area()<<endl;
    return 0;
}

