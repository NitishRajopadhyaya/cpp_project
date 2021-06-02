#include<iostream>
using namespace std;
 void area(float base , float height)
 {
     cout<<"Area is \t "<<(base*height)/2;
 }
 int main()
 {
     float base , height ;
     cout<<"enter base"<<endl;
     cin>>base;
     cout<<"enter height"<<endl;
     cin>>height;
      
      area(base,height);
 }