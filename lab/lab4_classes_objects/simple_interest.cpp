#include<iostream>
using namespace std;
class Interest
{
    private:
      float ,SI;

    public:
        
       void calulation(double per , double tim , double r)
        {
             
            
            SI=(per*tim*r)/100;
        }     

         void calulation(double per , double tim ,double rate=15)
        {
             
            
            SI=(per*tim*rate)/100;
        }   

        void display()
          {
              cout<<"Simple interest is : \t"<<SI;
          }                  
      
};

int main()
{
    Interest I1;
      float percentage,rate1,time;
      char ch;
        cout<<"Enter percentage";
        cin>>percentage;
        cout<<"Enter time";
        cin>>time;
        cout<<"Do you want to enter rate Y/N"<<endl;
        cin>>ch;
        
                if(ch=='Y'|| ch=='y')
                {
                    cout<<"enter rate";
                    cin>>Rate1;
                    I1.calulation(percentage,time,rate1);
                }


                else
                    I1.calulation(percentage,time);


       I1.display();

       /*I1.calulation(10.0,1,10.0);
       I1.calulation(10.0,10.0);
       I1.display();*/
}