#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:

    int roll;
    char name[20];

    
          void getdata()
          {
              cout<<"Enter roll"<<endl;
              cin>>this->roll;

              cout<<"Enter name"<<endl;
              cin>>this->name;
          }

          void displaydata()
          {
              cout<<this->roll<<" "<<this->name<<endl;
          }
};

int main()
{
    Student S1,S2;
    fstream file;

    file.open("Student.dat",ios::out);

    for(int i=0;i<3;i++)
    {
        S1.getdata();
        file.write((char*)&S1,sizeof(S1)); 
    }

    file.close();

}

