#include<iostream>
using namespace std;

class person
{
    protected:
         char name[20];
         int  code;

    public:
         void getdata()
         {
             cout<<"Enter name of person: "<<endl;
             cin.getline(this->name,20);

             cout<<"Enter code of person: "<<endl;
             cin>>this->code;
         }
};

class account : public  virtual person
{
   protected:  
        double pay;

   public:
        void get_pay()
        {
            cout<<"Enter salary amount: "<<endl;
            cin>>this->pay;
        }     
};

class admin : public virtual person
{
    protected:
      double experience;

      public:
         void get_experience()
         {
             cout<<"Enter Experience person have: "<<endl;
             cin>>this->experience;
         }
};

class Master : public account , public admin
{
    public:
         void display()
         {
             cout<<"Name of the person: "<<this->name<<endl;;
             cout<<"Code of the person: "<<this->code<<endl;
             cout<<"salary of the person: "<<this->pay<<" Ruppees "<<endl;
             cout<<"Experience of the person: "<<this->experience<<" Years "<<endl;
         }

         void update_data()
         {
              cout<<"Enter name of person: "<<endl;
              cin>>this->name;

              cout<<"Enter code of person: "<<endl;
              cin>>this->code;

               cout<<"Enter salary amount: "<<endl;
               cin>>this->pay;

               cout<<"Enter Experience person have: "<<endl;
               cin>>this->experience;
         }
};

int main()
{
    Master M1;
    char ch;

    M1.getdata();
    M1.get_pay();
    M1.get_experience();

    system("cls");

    M1.display();

    cout<<endl;
    cout<<"Do you want to update data Y/n ?"<<endl;
    cin>>ch;

         if(ch=='y'|| ch=='Y')
          {
              system("cls");
              M1.update_data();

              system("cls");
              M1.display();
          }
        else
           cout<<"*****The END ******"<<endl;

}