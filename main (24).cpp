
#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
protected:
    int x;
    int y;
public:
    Point(int m,int n) {x=m;y=n;}
    //~Point();
    int GetX() {return x;}
    int GetY() {return y;}
    void output_point()
      {
        cout<<"x="<<x<<",y="<<y<<endl;
      }
};
class Circle:public Point
{
protected:
    int radius;
public:
    Circle(int c,int d,int r):Point(c,d) {radius=r;}
    //~Circle();
    int GetRadius() {return radius;}
    void output_circle()   {cout<<"radius="<<radius<<endl;}
};
class Cylinder:public Circle
{
protected:
    int height;
public:
    Cylinder(int p,int q,int s,int h):Circle(p,q,s) {height=h;}
   // ~Cylinder();
    int GetH() {return height;}
    void output_cylinder()   {cout<<"height is:"<<height<<endl;}
    void Volume();
    void SurfaceArea();
};
void Cylinder::Volume()
{
    int volume;
    volume=3.14*radius*radius*height;
    cout<<fixed<<setprecision(1)<<"volume is:"<<volume<<endl;
}
void Cylinder::SurfaceArea()
{
    int surfacearea;
    surfacearea=2*3.14*radius*height;
    cout<<fixed<<setprecision(1)<<"surface area is:"<<surfacearea<<endl;
}
int main()
{
    Point a(1,2);
      a.output_point();
    Circle b(1,2,4);
      b.output_circle();
    Cylinder c(1,2,4,5);
      c.output_cylinder();
    c.Volume();
    c.SurfaceArea();
    return 0;
}


