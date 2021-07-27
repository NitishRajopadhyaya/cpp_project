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

       friend Vector operator + (Vector &addV1 , Vector &addV2);
      

        void display()
       {
            cout<<this->i<<" i "<<" + "<<this->j<<" j "<<" + "<<this->k<<" k "<<endl;
      }
};


 Vector operator + (Vector &addV1 , Vector &addV2)
 {
           Vector v4;

           v4.i = addV1.i + addV2.i;
           v4.j = addV1.j + addV2.j;
           v4.k = addV1.k + addV2.k;
           
           return v4;
}

int main()
{
    Vector V1(10,20,5);
    Vector V2(1,5,3);
    Vector V3( 4,5,2);
   
    Vector V4,V5;

    V4 = V2 + V3; // adding last two vectors

    V5 = V1 + V4; // adding sum of last two vectors with first vector
    
    V5.display();
}