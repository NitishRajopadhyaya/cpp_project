#include<iostream>
using namespace std;
 float area(float base , float height)
 {
     return((base * height)/2);
 }
 int main()
 {
     float base , height ;
     cout<<"enter base"<<endl;
     cin>>base;
     cout<<"enter height"<<endl;
     cin>>height;
    
     cout<<"area is \t"<<area(base,height);
 }