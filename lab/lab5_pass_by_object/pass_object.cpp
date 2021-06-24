#include<iostream>
using namespace std;
class Complex
{
    private:
        double real,imaginery;
        double sum_real,sum_imaginery;

    public:
      
          void getdata()
          {
              cout<<"Enter complex number "<<endl;
              cin>>real>>imaginery;
          }

          void display_sum()
          {
              cout<<"The sum of Complex numbers is"<<endl;
              cout<<sum_real<<" + "<<sum_imaginery<<" i "<<endl;
          }

            int  Add_num(Complex C1 , Complex C2)
          {
              //Complex n;
              sum_real= C1.real + C2.real;
              sum_imaginery = C1.imaginery + C2.imaginery;
              // return sum;
              return 0;
          }

         
};

int main()
{
    Complex C1,C2,C3;

     cout<<"Enter First Complex number "<<endl;
     C1.getdata();

     cout<<"Enter Second Complex number "<<endl;
     C2.getdata();

     C3.Add_num(C1,C2);
     C3.display_sum();

}