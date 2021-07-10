#include<iostream>
using namespace std;

 class Student
 {
          public:

             char name[20];
             int  roll;
            // double physics , Maths , Computer ,Total_percent;
             //int  Attendence;

            public:

             void get_name()
             {
                  cout<<"Enter Student name "<<endl;     
                  cin>>this->name;

                  cout<<"Enter roll number of student "<<endl;
                  cin>>this->roll;
             }
 };


 class marks : public  virtual Student
 {
     protected:
         double physics , Maths , Computer;

     public:
          void getmarks()
          {
              cout<<"Enter marks obtained in physics "<<endl;
              cin>>this->physics;

              cout<<"Enter marks obtained in Maths "<<endl;
              cin>>this->Maths;

              cout<<"Enter marks obtained in computer "<<endl;
              cin>>this->Computer;
          }           
 };

 class Attendence_info : public virtual Student
 {
     protected:
       int  Attendence;

     public:
           void get_attendence()
           {
               cout<<"Enter no of days attended"<<endl;
               cin>>this->Attendence;
           }

          /* void display_name()
           {
                cout<<"Students name : "<<this->name;
                cout<<endl;

                cout<<"Students roll : "<<this->roll;
                cout<<endl;
           } */  
 };

 class ALL_info : public marks , public Attendence_info 
 {
        int Total_percent;
      public:
            void calc()
             {
                 Total_percent = (physics + Maths + Computer)/3;
             } 

            void display()
            {
                cout<<"Students name : "<<this->name;
                cout<<endl;

                cout<<"Students roll : "<<this->roll;
                cout<<endl;

                cout<<"No of days attended :"<<this->Attendence;
                cout<<endl;

                cout<<"Total percentage :"<<this->Total_percent;
                cout<<endl;
            } 

          /*  void display_name()
           {
                cout<<"Students name : "<<this->name;
                cout<<endl;

                cout<<"Students roll : "<<this->roll;
                cout<<endl;
           } */
};

int main()
{
    ALL_info A1;
   // Attendence_info M1;

   // M1.get_name();
     
      A1.get_name();  // should use virtual in class marks and Attendence_info to access get_name function of class student

    A1.getmarks();
    A1.get_attendence();

    system("cls");

   // M1.display_name();
    A1.calc();
   // A1.display_name();
    A1.display();
}





