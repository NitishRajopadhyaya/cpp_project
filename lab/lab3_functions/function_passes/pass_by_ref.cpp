#include<iostream>
 using namespace std;
 void display(int num)
 {
     cout<<"value before altering"<<num<<endl;
     num=1000;
     cout<<"value before altering"<<num<<endl;
 }

 void functionRef(int &num2)
 {
       num2=145;
     cout<<"changed  value \t"<<num2<<endl;
 }

 int main()
 {
     int num1=243;
     int num3=456;
      display(num1);
      cout<<"after function call value"<<num1<<endl;
      functionRef(num3);
      cout<<"after function call value"<<num3<<endl;

 }