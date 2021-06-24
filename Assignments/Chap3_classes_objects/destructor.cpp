#include<iostream>
using namespace std;
class print
{ 
     public: 
      
    print()
    {
    cout<<"HI i am nitish"<<endl;
    }

    ~print()
    {
        cout<<"destrutor called"<<endl; //destructor declared
    }

    void display()
      {
          cout<<"how are you"<<endl;
      }

};

int main()
{
    print P1;
    P1.display();
    //object P1 out of scope destructor called
} 