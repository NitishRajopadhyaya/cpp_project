#include<iostream>
using namespace std;

class student
{
     protected:
            char name[20];
            int roll_num;

    public:
        void getdata()
        {
            cout<<"Enter Name of student: "<<endl;
            cin>>this->name;

            cout<<"Enter roll number of student: "<<endl;
            cin>>this->roll_num;
        }
};


class Test : public virtual student
{
   protected:
       int Math ,Eng;

   public:
        void getmarks()
        {
            cout<<" Enter Marks Obtained in Maths: "<<endl;
            cin>>this->Math;

            cout<<"Enter MArks Obtained in English: "<<endl;
            cin>>this->Eng;
        }      
};

class Sports : public  virtual student
{
    protected:
         char score;

     public:
          void getscore()
          {
              cout<<"Enter score obtained: "<<endl;
              cin>>this->score;
          }
};

class Result : public Test , public Sports
{
    int total ;

    public:
       void calc()
       {
           this->total = this->Math + this->Eng ;
       }

       void display()
       {
           cout<<"Name of Student: "<<this->name<<endl;
           cout<<"Roll number of student: "<<this->roll_num<<endl;
           cout<<"Total marks secured: "<<this->total<<endl;
           cout<<"Score Secured in sports: "<<this->score<<endl;

       }
};

int main()
{
    Result R1;

    R1.getdata();
    R1.getmarks();
    R1.getscore();

    system("cls");

    R1.calc();
    R1.display();
}
