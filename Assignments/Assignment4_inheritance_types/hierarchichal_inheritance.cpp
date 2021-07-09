#include<iostream>
using namespace std;
class first
{
       public:
          
          first()
          {
              cout<<"Constructor of Class First "<<endl;
          }

};


class second : public first
{
    public:
          second()
          {
              
              cout<<"Constructor of class Second";
              cout<<endl;
          }
};

class third : public first
{
    public:
          third()
            {
                 
                 cout<<"Constructor of class third";
                 cout<<endl;
            }
};

int main()
{
    second S1 ;

    cout<<endl;

    third T1;


}