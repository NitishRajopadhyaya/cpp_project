#include<iostream>
using namespace std;
class calculation
{
    private:
        int sum;
        float diff;
    public: 
        calculation(int num1 ,int num2)
        {
            sum=num1+num2;
            cout<<"The sum of Numbers is :  "<<sum<<endl;
        }
       
       calculation(int num1 ,int num2 ,int num3)
       {
         sum=num1+num2+num3;
            cout<<"The sum of Numbers is :  "<<sum<<endl;  
       }

       calculation( float num1 ,float num2)
       {
             if(num1>num2)
                diff=num1-num2;
             else
                diff=num2-num1;   

           cout<<"Difference of Numbers is :  "<<diff<<endl;   
       }
};

int main()
{
    calculation C1(12,14) ; // object created , first constructor called
     calculation C2(20,30,50); 
    calculation C3(20.45f,10.23f);
    
}