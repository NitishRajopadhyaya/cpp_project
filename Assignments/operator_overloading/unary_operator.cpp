#include<iostream>
using namespace std;
class Unary
{
    int num1 , num2 ,num3 ;

    public:
      void getdata( int x ,int y ,int z)
      {
           num1 = x;
           num2 = y;
           num3 = z;

      }

      void operator ++() //returntype operator op()
      {
           num1 = ++num1 ;
           num2 = ++num2 ;
           num3 = ++num3 ;
      }

      void display()
      {
           cout<<"Number 1  "<<num1<<endl; 
           cout<<"Number 2  "<<num2<<endl; 
           cout<<"Number 3  "<<num3<<endl; 
      }

};
int main()
{
     Unary U1;

     U1.getdata(12,-35,24);
     //U1.operator-();
      ++U1;
     U1.display(); 

}