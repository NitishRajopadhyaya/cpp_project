#include<iostream>
using namespace std;

class Animal
{
    public:
       Animal()
       {
           cout<<"Constructor of Animal class"<<endl;
       }

        void move ()
       {
           cout<<"  Animal movements "<<endl;
       }

       ~Animal()
       {
           cout<<"Destructor of Animal class "<<endl;
       }
};

 class Dog : public Animal
 {
      public:
                Dog()
                {
                    cout<<"Constructor of class dog is called "<<endl;
                }

                void move()
                {
                    cout<<"Dogs walks with four legs"<<endl;
                }

                ~Dog()
                {
                    cout<<"Destructor of class Dog is called"<<endl;
                }
 };

 int main()
 {
     Animal *A1;
    
       
        A1 = new Animal ;
        A1->move();

        delete A1;
  
       A1 = new Dog ;
       A1->move();

       delete A1;
        
 }
