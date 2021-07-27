#include<iostream>
using namespace std;

class Area_calc
{
    public:
       void Area( double length)
       {
           cout<<" Area of square : "<<length*length<<endl;
       }

       void Area( double length , double breadth)
       {
           cout<<" Area of rectangle : "<<length*breadth<<endl;
       }

       void Area( int base , int height)
       {
           cout<<"Area of triangle : "<<(base*height)/2<<endl;
       }
};
int main()
{
    Area_calc Sqaure;
    Sqaure.Area(10.0);

    Area_calc Rectangle;
    Rectangle.Area(14.23,10.3);

    Area_calc Triangle;
    Triangle.Area(10,5);

}
