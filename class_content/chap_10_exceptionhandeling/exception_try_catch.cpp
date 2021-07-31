#include<iostream>
using namespace std;

int main()
{
    float x= -1.9f;

    cout<<" before try"<<endl;

    try
    {
        cout<<"Inside try"<<endl; 
         if(x<0)
            { 
                
                throw x;
                cout<<"after throw"<<endl;
            }
    }
    catch (int x)
    {
        cout<<"exception caught : int type"<<endl;
    }
    
    catch ( float x) 
    {
        cout<<"Exception caught : float type"<<endl;
    }

    cout<<"After catch"<<endl;
}