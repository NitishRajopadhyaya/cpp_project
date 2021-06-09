#include<iostream>
#include<math.h>
using namespace std;
 void area()
 {
   float side1,side2,side3,ar,s;
     cout<<"enter side 1"<<endl;
     cin>>side1;
     cout<<"enter side 2"<<endl;
     cin>>side2;
     cout<<"enter  side 3"<<endl;
     cin>>side3;

     s=(side1+side2+side3)/2;
             ar =sqrt(s*(s-side1)*(s-side2)*(s-side3));
             cout<<"Area is \t"<<ar;
 
 }
 int main()
 {
     area();
 }