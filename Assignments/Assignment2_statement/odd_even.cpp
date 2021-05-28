#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number";
    cin>>number;
            if(number==0)
                   cout<<"You entered \t"<<number<<endl;

            else if((number%2)==0)
                    cout<<"You entered even number \t"<<number<<endl;

             else
                    cout<<"You entered odd number \t"<<number<<endl;

}