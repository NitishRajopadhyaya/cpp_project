#include<iostream>
using namespace std; // pure virtual func bhujna book page 351

class base 
{

      int x;

    public:
        virtual void func() =0 ; // this is pure virtual function , and hence the class will become abstract class , so we cannot create object of abstract class
        int getx()
        {
            cout<<"this func inside abstract class"<<endl;
            return x;
        }
};

class derived : public base
{
    public:
        void func()
        {
            cout<<"function of derived class "<<endl;
        }
};

int main()
{
    //base B1;
     //B1.func(); abtract class ko object banauna paidaina 

     //base *btr: tara pointer banauna paucha 
     //btr->getx(); yo gare bhane abtract class ko pure virtual func bahek aru acces garna milxa
      
      derived D1 ;

      D1.func();
}