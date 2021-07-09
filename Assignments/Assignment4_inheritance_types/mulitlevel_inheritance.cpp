#include<iostream>
using namespace std;
class first
{
    protected:

    int num1=45;

    public:
        first()
         {
             cout<<" Constructor of class first is called "<<endl;
         }
       ~first()
       {
           cout<<"Destructor of  class 'First' is called "<<endl;
       }
};

class second : public first
{
    public:
    second()
     {
         cout<<"Constructor of class 'second' is called "<<endl;
     }

     ~second()
     {
         cout<<"Destructor of class  'second' is called " <<endl;
     }
};

class third : public second
{
    public:
        third()
        {
            cout<<"Constructor of class 'third' is called" <<endl;
            cout<<endl;

        }

        void display()
        {
            cout<<"Protected member of class first is accessed i.e value of num is "<<this->num1;
            cout<<endl;
        }

        
        ~third()
        {
            cout<<endl;
            cout<<"Destructor of class 'third' is called"<<endl;
        }
};

int main()
{
    third T1; // object created constructor being called
    
    T1.display();

    // object T1 out of scope destructor being called
}