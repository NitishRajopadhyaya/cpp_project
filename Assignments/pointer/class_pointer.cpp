#include<iostream>
using namespace std;
 class volume
 {
     private:
         double length,breadth, height;

     public:
           volume(double len , double bre , double hgt)
           {
               length =len;
               breadth =bre;
               height = hgt;
           }  

           double display()
           {
               return length*breadth*height;
           }
 };

 int main()
 {
     volume V1(10.1,30.0,1.0);
     volume *V2;
      V2=&V1;
     cout<<"volume is " <<V2->display();


 }