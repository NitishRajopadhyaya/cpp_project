#include<iostream>
#include<math.h>
using namespace std;
 float area(float side1 , float side2 , float side3)
 {
     float s,ar;
     s=(side1+side2+side3)/2;
     ar =sqrt(s*(s-side1)*(s-side2)*(s-side3));

     return ar;
 }
 int main()
 {
     float side1,side2,side3,ar,s;
     cout<<"enter  side 1"<<endl;
     cin>>side1;
     cout<<"enter side 2"<<endl;
     cin>>side2;
     cout<<"enter side 3"<<endl;
     cin>>side3;
     
     cout<<"Area is \t"<<area(side1,side2,side3);
 }
     
             