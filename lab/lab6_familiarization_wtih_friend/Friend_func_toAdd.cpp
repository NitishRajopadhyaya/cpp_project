#include<iostream>
using namespace std;

class First
{ 
    int number_1;

    public:

     friend class Second ;
       void getdata()
       {
           cout<<"Enter First Number :"<<endl;
           cin>>number_1;
       } 
      
};

class Second
{
    private:
    int number_2;
    public:

   // friend class First ; not neccesarry
      void getdata()
        {
            cout<<"Enter second Number :"<<endl;
            cin>>number_2;
        }
   
      int add( First F1 , Second S1) // as the class is a friend , it can access data members of class First
      { 
             return (F1.number_1 +S1.number_2);
      }

};

int main()
{
    First obj;
    Second S1 , S2;

    obj.getdata();
    S1.getdata();

    cout<<"Addition of both Entered numbers is :"<<S2.add(obj,S1)<<endl;
}

