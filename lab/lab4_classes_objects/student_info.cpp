#include<iostream>
#include<stdio.h>
using namespace std;
 
 class Students
 {
     private:
       char name[20],addr[20];
       int roll ;
       float perentage;

     public:

           void inputdata()
            {
                cout<<"Enter Your name "<<endl;
                gets(name);
                cout<<"Enter your address"<<endl;
                gets(addr);
                cout<<"Enter Your roll"<<endl;
                cin>>roll;
                cout<<"Enter your percentage"<<endl;
                cin>>perentage;
            }  


            void displaydata()
            {
                 if(perentage > 40)
                 {
                        cout<<"your name :\t";
                        puts(name);
                        cout<<" your address :\t";
                        puts(addr);
                        cout<<"roll  number:\t"<<roll<<endl;
                        cout<<" Your percentage \t"<<perentage;
                 }
                  
                  else
                      cout<<"Sorry! you failed";
            }
 };

 int main()
 {
     Students S1;
     S1.inputdata();
     S1.displaydata();
 }