#include<iostream>
using namespace std;

class Vector
{
    double i , j ,k ;

    public:
       Vector()
       {
           i=0;
           j=0;
           k=0;
       }
       Vector( double I1 , double J1 ,double K1)
       {
           this->i = I1;
           this->j = J1;
           this->k = K1;
       }

       Vector operator + (Vector &addV)
       {
           Vector v4;

           v4.i = this->i + addV.i;
           v4.j = this->j + addV.j;
           v4.k = this->k + addV.k;
           
           return v4;
     }

        void display()
       {
            cout<<this->i<<" i "<<" + "<<this->j<<" j "<<" + "<<this->k<<" k "<<endl;
      }
};

int main()
{
    Vector V1(10,20,5);
    Vector V2(1,5,3);
    Vector V3( 4,5,2);
   
    Vector V4;

    V4 = V1 + V2 + V3;

     V4.display();
}