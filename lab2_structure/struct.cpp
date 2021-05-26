#include<iostream>
#include<stdio.h>
using namespace std;
struct student{
    char name[20];
   char address[20];
    int roll;
    
};

int main()
{
    student s;
    cout<<"enter name"<<endl;
    gets(s.name);
    cout<<"enter roll"<<endl;
    cin>>s.roll;
    cout<<"enter address"<<endl;
    cin>>s.address;

    cout<<"entered information"<<endl;
    //puts(s.name);
    cout<<s.name<<"\t"<<s.roll<<"\t"<<s.address<<endl;
}
