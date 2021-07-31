#include<iostream>
using namespace std;

class demo
{

};

int main()
{
    try{
        throw demo();
    }

    catch (demo d)
    {
       cout<<" caught exception of demo class"<<endl;
    }
}