#include<iostream>
using namespace std;
int main()
{
   
     int number,sum=0;
     int count;
     
    cout<<"Enter a number"<<endl;
    cin>>number;
     count=number;
       for( int i=1;i<=number;i++)
           sum+=i;
           
        cout<<"sum of first \t"<<count<<"\t natural number is"<<endl;
    cout<<sum;
}
