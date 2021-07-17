#include<iostream>
using namespace std;

class Animal
{
    public:

        Animal()
        {
            cout<<" Animal 123"<<endl;
        }
       virtual void move() = 0;

       void display()
       {
           cout<<"Animal class is called "<<endl;
       } 
        
};

class Dog : public Animal
{
     public:
        void move()
        {
            cout<<"Dog class is called "<<endl;
        }
};

int main()
{
    Animal *A1;

    A1->display();

    Dog D1;

    D1.move();
}