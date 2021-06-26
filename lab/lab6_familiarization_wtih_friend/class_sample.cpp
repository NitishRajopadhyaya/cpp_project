#include<iostream>
using namespace std;
class Sample
{
   private:
      float num1 ,num2;

   public:
     friend float average(Sample S1); //  beacuse of this the following funtion can access every member function or data members
      void getdata()
           {
               cout<<"Enter Two numers :"<<endl;
               cin>>num1>>num2;
           } 

       /*float average( Sample S1)              yo garnu ra , yei function class bahira declare garera friend function declare garnu eutai ho 
       {
           float avg;
            avg = ((S1.num1 + S1.num2)/2);
            return avg;
       } */      
};

float average(Sample S1) // function having object as an paramtere 
{
    float avg;
    avg = (S1.num1 + S1.num2)/2; //we can still access the private member function , as we deifned the function as FRIEND function
    return avg;
}

int main()
{
    Sample S1;
    Sample S2;

    S1.getdata();

    cout<<"Average is :"<<average(S1)<<endl; // here average(S1) calls function "float average (sample S1)"
   //cout<<"average is "<<S2.average(S1);  normally we do this 

}