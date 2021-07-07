// operator function have only one parameter


#include<iostream>
using namespace std;

 class distances
 {
     int feet , inch ;

     public:
        distances()
        {
            feet=0;
            inch=0;
        }

        distances( int feet1 , int inch1)
        {
            feet = feet1;
            inch = inch1 ;

        }

        distances operator + ( distances &d2)
        {
            distances D3;

            D3.feet = this->feet + d2.feet ;
            D3.inch = this->inch + d2.inch ;  

            return D3;

        }
        
         

        void displaydata()
        {
            cout<<" Total feet = "<<this->feet<<endl; 
            cout<<" Total inch = "<<this->inch;
        }
 };

 int main()
 {
      distances D1(10,2);
      distances D2(4,5);
      distances D3;

      D3 = D1 + D2 ;

      D3.displaydata();



 }