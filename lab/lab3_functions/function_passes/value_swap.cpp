#include<iostream>
using namespace std;
 void swapRef(int &num1 , int &num2)
 {
     int temp;
     temp=num1;
     num1=num2;
     num2=temp;

     //cout<<"vlaue of num1 = "<<num1<<endl;
    // cout<<"value of num2 = "<<num2<<endl;
 }

 void swap(int num1 , int num2)
 {
    int temp;
     temp=num1;
     num1=num2;
     num2=temp;

    // cout<<"vlaue of num1 = "<<num1<<endl;
    // cout<<"value of num2 = "<<num2<<endl;
 }
 
 int main()
 {
     int  number1=200, number2=100;
      cout<<" value of number 1 before function call \t"<<number1<<endl;
      cout<<" value of number 2 before function call \t"<<number2<<endl;
         
             swap(number1,number2);

      cout<<" value of number 1 after function call  with value\t"<<number1<<endl;
      cout<<" value of number 2 after function call  with value\t"<<number2<<endl;   

     swapRef(number1,number2);
   cout<<endl;
  cout<<" value of number 1 after function call with reference \t"<<number1<<endl;
      cout<<" value of number 2 after function call with reference \t"<<number2<<endl;         

 }