#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float side1,side2,side3, base,height;
    float area,s;
     char ch;
    cout<<" For right angle triangle press 'Y' else press any key";
    cin>>ch;
    if( ch=='y'||ch=='Y')
      {
           cout<<"Enter base"<<endl;
           cin>>base;
           cout<<"enter height"<<endl;
           cin>>height;

              area = (base*height)/2; 
      }

      else
          {
              cout<<"Enter value of side a"<<endl;
             cin>>side1;
             cout<<"Enter valu of side b"<<endl;
             cin>>side2;
             cout<<"Enter vlaue of side c"<<endl;
             cin>>side3;
             s=(side1+side2+side3)/2;
             area =sqrt(s*(s-side1)*(s-side2)*(s-side3));
           
          }

          cout<<"Area of given triangle is \t"<<area;


}