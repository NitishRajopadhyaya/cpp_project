#include<iostream>
using namespace std;
 class first
 {
     int m =100;

     public:

      void display()
      {
          cout<<" M = " <<this->m<<endl; // F1.display() garda this le F1 ko address lai point garirahuncha ani F2.display garda F2 ko address 
          cout<<" M = " <<m<<endl; // yesma ni compiler le this keyword  bydefault generate garxa ,  mathi ko ra yo statement same ho
          cout<<"address of object"<<this<<endl; // this le address lai point garxa
          cout<<endl;

          
      }
 };

 int main()
 {
     first F1 ,F2;
   F1.display(); 
   F2.display();

 }