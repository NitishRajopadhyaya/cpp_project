#include<iostream>
using namespace std;
class Room
{
    

    public:
           float length,breath,height;

           void calcarea()
           {
               float area;
               area=length*breath;
               cout<<"area of your room is \t"<<area<<endl;
           }

            void calcvolume()
           {
               float volume;
               volume=length*breath*height;
               cout<<"volume of your room is \t"<<volume<<endl;
           }

};

 int main()
 {
     Room R1;
        cout<<"enter legth ,breath,height of you room"<<endl;
        cin>>R1.length>>R1.height>>R1.breath;
       cout<<endl;
         R1.calcarea();
         cout<<endl;
       R1.calcvolume();  
 }