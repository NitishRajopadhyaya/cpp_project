#include<iostream>
using namespace std;

class Series
{
    private:
      int num1 , num2 , num3;

    public:
       Series()
       {
           num1=0;
           num2=1;
       }   

       void operator ++( int) // post increment ma dummy int parameter pass garnu parcha
       {
           cout<<num1 <<" \t";
           num3=num1+num2;
           num1=num2;
           num2=num3;
       }

};

int main()
{
      Series S1;

       int limit;
       cout<<"Enter  limit of serires " <<endl;
       cin>>limit;

      for(int i=0 ;i<limit;i++)
       {
           S1++;
       }
}