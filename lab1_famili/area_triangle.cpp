#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int base,height,side1,side2,side3;
    float perimeter,area;
    cout<<"Enter value of side a"<<endl;
    cin>>side1;
    cout<<"Enter valu of side b"<<endl;
    cin>>side2;
    cout<<"Enter vlaue of side c"<<endl;
    cin>>side3;
   perimeter=(side1+side2+side3)/2;
    area =sqrt(perimeter*(perimeter-side1)*(perimeter-side2)*(perimeter-side3));
    cout<<"Area of given triangle is \t"<<area;
    

}