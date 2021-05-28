#include<iostream>
using namespace std;
int main()
{
     int number,sum=0;
     int count;
     
    cout<<"Enter a number"<<endl;
    cin>>number;
     count=number;
       do
       {
           sum+=number;
           number--;
       }while(number>0);
    
    cout<<"sum of first \t"<<count<<"\t natural number is"<<endl;
    cout<<sum;
}