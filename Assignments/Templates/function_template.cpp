#include<iostream>
using namespace std;

template<class Temp>

Temp Large_num( Temp T1 , Temp T2)
{
      if(T1>T2)
        return T1;

      else
         return T2;
}

int main()
{
    int I1,I2;
    float F1,F2;
    char C1,C2;

    cout<<"Enter two Integer numbers "<<endl;
    cin>>I1>>I2;

    cout<<"The LArgest number between entered number is :"<<Large_num(I1,I2)<<endl;

    cout<<"Enter Two float type numbers "<<endl;
    cin>>F1>>F2;

    cout<<"The LArgest number between entered number is :"<<Large_num(F1,F2)<<endl;

    cout<<"Enter Two characters "<<endl;
    cin>>C1>>C2;

    cout<<"The LArgest SCII number between entered character is :"<<Large_num(C1,C2)<<endl;
}