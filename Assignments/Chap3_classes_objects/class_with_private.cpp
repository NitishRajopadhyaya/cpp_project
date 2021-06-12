#include<iostream>
using namespace std;
class Room
{
    private:
          float length,breath,height;

    public:
         void inputdata()
         {
             cout<<"enter legth ,breath ,height fo you room"<<endl;
             cin>>length>>breath>>height;
        
         }

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
       R1.inputdata();
       cout<<endl;
         R1.calcarea();
         cout<<endl;
       R1.calcvolume();  
 }