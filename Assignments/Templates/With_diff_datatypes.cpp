#include<iostream>
using namespace std;

template<class Temp1 , class Temp2>

int Large_num( Temp1 T1 , Temp2 T2)
{
      if(T1>T2)
        return T1;

      else
         return T2;
}

int main()
{
    int I1,I2;
    float F1 =12.56f;
    char C1,C2;

    cout<<"Enter one integer and one character each "<<endl;
    cin>>I1;

    cout<<"The LArgest number between entered number is :"<<Large_num(I1,F1)<<endl;

  //  cout<<"Enter Two float type numbers "<<endl;
    //cin>>F1>>F2;

   // cout<<"The LArgest number between entered number is :"<<Large_num(F1,F2)<<endl;

    //cout<<"Enter Two characters "<<endl;
    //cin>>C1>>C2;

    //cout<<"The LArgest SCII number between entered character is :"<<Large_num(C1,C2)<<endl;
}