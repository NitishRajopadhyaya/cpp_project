#include<iostream>
using namespace std;
class Complex
{
    float Real , imaginery ;

    public:
          void getdata()
          {
              cout<<"Enter Real part of Complex Number"<<endl;
              cin>>Real;
              cout<<"Enter Imaginery oart of Complex number"<<endl;
              cin>>imaginery;
          } 

           Complex operator +(Complex C1)
           {
               Complex temp;
                
                temp.Real= Real + C1.Real;
                temp.imaginery = imaginery + C1.imaginery ;

                return temp;
           }

          void displaydata()
          {
              cout<<" Sum of Complex number Entered is "<<endl;
              cout<<Real<<" +  i "<<imaginery<<endl;
          }
         
};
int main()
{
    Complex C_1 , C_2 , C_3 ;

    C_1.getdata();
    C_2.getdata();

    C_3 = C_1 + C_2 ;

    C_3.displaydata();
}