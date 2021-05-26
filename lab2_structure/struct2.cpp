#include<iostream>
//#include<stdio.h>
using namespace std;
struct student
{
    char name[20];
   char address[20];
    int roll;
    
};

int main()
{
    student s[3];
    int i;
    for(i=0;i<3;i++)
        {
            cout<<"enter name of \t"<<i+1<<"\t student"<<endl;
            cin>>s[i].name;
            cout<<"enter roll \t"<<i+1<<"\t student"<<endl;
            cin>>s[i].roll;
            cout<<"enter address \t"<<i+1<<" \t student"<<endl;
            cin>>s[i].address;
         }
            cout<<"entered information"<<endl;
         for(int j=0;j<3;j++)
            {
                
                //puts(s.name);
                cout<<s[j].name<<"\t"<<s[j].roll<<"\t"<<s[j].address<<endl;
             }
}
