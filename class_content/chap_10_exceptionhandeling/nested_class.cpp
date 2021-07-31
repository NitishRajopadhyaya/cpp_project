#include<iostream>
#include<math.h>
using namespace std;

class Number
{
    private:
       int num;

    public:
       class NEG{};
        void Getnum()
        {
            cout<<"Enter The number";
            cin>>this->num;
        }   

        int squareroot()
        {
            if (num<0) 
               throw NEG();
            else
              return (sqrt(num));

        }
};

int main()
{
    Number N1;
    double D1;

    N1.Getnum();

      try{
           D1 = N1.squareroot();
           cout<<"Square root is :"<<D1<<endl;
           cout<<" Processing Successful .. no exceptions"<<endl;
      }

      catch(Number::NEG )
       {
           cout<<" sqaure root of negative number not allowed"<<endl;
       }
}