#include<iostream>
using namespace std;
int main()
{
     int number,sum=0;
     int count;
     
    cout<<"Enter a number"<<endl;
    cin>>number;
     count=number;
       while(number>0)
       {
           sum+=number;
           number--;
       }
    
    cout<<"sum of first \t"<<count<<"\t natural number is"<<endl;
    cout<<sum;
}