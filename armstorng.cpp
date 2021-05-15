#include<iostream>
using namespace std;
int main()
{
   int a;
    int b,c=0,d;
    cout<<"Enter a number";
    cin>>a;
    d=a;
    while(a>0)
    {
        b=a%10;
        c=(b*b*b)+c;
        a=a/10;
    }
    if(c==d)
    cout<<"armstrong";
    else
    cout<<"not a armstrong";
    //cout<<"hello world";
}