#include<iostream>
using namespace std;

class Student
{
    protected:
       char name[20];
       int  roll;

    public:
         void Getinfo()
         {
             cout<<"Enter Students name "<<endl;
             cin>>this->name;

             cout<<"Enter roll "<<endl;
             cin>>this->roll;
         }   
};


class marks_obtained
{
    protected:
    double M1 , M2 , M3;

   public:
        
          void getmarks()
          {
              cout<<"Enter Marks of three sub"<<endl;
              cin>>this->M1;
              cin>>this->M2;
              cin>>this->M3;
          }

};


class Information : public Student , public marks_obtained
{
    double marks_per;

     public:
           void calc()
           {
               this->marks_per = (this->M1 + this->M2 + this-> M3)/3;

           }

          void display()
          {   
              cout<<endl;

              cout<<"Name of Student is "<<this->name<<endl;
              cout<<endl;

              cout<<"Rolll number of Student is "<<this->roll<<endl;
              cout<<endl;

              cout<<"Percentage Obtained "<<this->marks_per <<" % "<<endl;
              cout<<endl;
          } 

};

int main()
{
    Information I1;

    I1.Getinfo();
    I1.getmarks();
    I1.calc();

    system("cls");

    I1.display();

}