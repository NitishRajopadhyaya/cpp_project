#include<iostream>
using namespace std;

class parent_info
{
    public:
            char name[20];
            

      void Getdata()
      {
          cout<<"Enter Name "<<endl;
          cin>>this->name;
      }      
};

class Child : public parent_info
{
    public:
          void display()
          {
              cout<<"Parent Name entered is "<<this->name<<endl;
          }
};

int main()
{
    Child johnathon;

    johnathon.Getdata();

     system("cls");
     
    johnathon.display();
}