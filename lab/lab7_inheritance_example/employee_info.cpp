#include<iostream>
#include<cstdio>
using namespace std;

class staff
{
    protected:
       int code;
       char name[20];

    public:
         void gedata()
         {
             cout<<" Enter name "<<endl;
             cin>>this->name;

             cout<<"Enter Code "<<endl;
             cin>>this->code;
         }   
};

class teacher : public staff 
{
    private:
       string subject;
       string publication;

    public: 

        void getdata_teach()
        {
            cout<<"Enter subject taught by teacher "<<endl;
            cin>>this->subject;

            cout<<"Enter pubication "<<endl;
            cin>>this->publication;
        }  

        void display_data()
        {
            cout<<" Name of teacher : "<<this->name<<endl;
            cout<<" Subject He/She teaches "<<this->subject<<endl;
            cout<<" Publication of teacher "<<this->publication<<endl;
            cout<<" code of teacher "<<this->code<<endl;

        } 
};

class officer : public staff
{
    char grade[20];

     public:
          void getdata_off()
          {
              cout<<"Enter grade of officer "<<endl;
              cin>>this->grade;
          }
        void display_data()
        {
            cout<<" Name of officer : "<<this->name<<endl;
            cout<<" grade of officer "<<this->grade<<endl;
            cout<<" code of teacher "<<this->code<<endl;
            

        } 

};

class Typist : public staff
{
    protected:
         int speed;

    public:
         void get_speed()
         {
             cout<<"Enter your typing speed  in WPM"<<endl;
             cin>>this->speed; 
         }     
};

class Casual : public Typist
{
    int daily_wages;

    public:
       void get_wages()
       {
           cout<<"Enter the daily wage typist gets "<<endl;
           cin>>this->daily_wages;
       }

       void display()
       {
           cout<<"Name of typer: "<<this->name<<endl;
           cout<<"Code of typer: "<<this->code<<endl;
           cout<<"Speed of typer: "<<this->speed<<endl;
           cout<<"Daily wages given: "<<this->daily_wages<<endl;
       }
};

class Regular : public Typist
{
    public:
       void display()
       {
           cout<<" REGULAR TYPIST "<<endl;
           cout<<endl;

           cout<<"Name of Typist: "<<this->name<<endl; 
           cout<<"Code of Typist: "<<this->code<<endl; 
           cout<<"Speed of Typist: "<<this->speed<<endl; 
       }
};

int main()
{
    int select;
     char ch;
  teacher T1;
  officer O1;
  Casual C1 ;
  Regular R1;
    
        cout<<"!!&& Welcome to Staff Database &&!!"<<endl;
        cout<<endl;

    do
    {
       

        cout<<"Press 1 to Enter Information of Teacher "<<endl;
        cout<<"Press 2 to Enter Information of Officer "<<endl;
        cout<<"Press 3 to Enter Information of Part-time Typist "<<endl;
        cout<<"Press 4 to Enter Information of Regular Typist "<<endl;
  
         cin>>select;
                  system("cls"); 
                     switch (select)
                            {
                            case 1:
                                    
                                    T1.gedata();
                                    T1.getdata_teach();
                                    system("cls");
                                    break;
                            case 2:
                                    O1.gedata() ;
                                    O1.getdata_off();
                                    system("cls");
                                    break;
                            case 3:
                                C1.gedata();              
                                C1.get_speed();
                                C1.get_wages();
                                system("cls");
                                break;
                            case 4:
                                R1.gedata();
                                R1.get_speed();
                                system("cls");
                                break;       
                            
                            default:
                                cout<<"Invalid Option "; 
                                break;
                            }

                       cout<<"Do yo want to Enter again  Y/n ?"<<endl;
                      cin>>ch;      
    }  while (ch=='y'||ch=='Y');


        system("cls");
       

        cout<<"Do yo want to display Entered info Y/n ?"<<endl;
        cin>>ch;

           if(ch=='y'|| ch=='Y')
            {
              cout<<"Press 1 to Display Information of Teacher "<<endl;
              cout<<"Press 2 to Display Information of Officer "<<endl;
              cout<<"Press 3 to Display Information of Part-time Typist "<<endl;
              cout<<"Press 4 to Display Information of Regular Typist "<<endl;
  
             cin>>select;

                    switch (select)
                    {
                    case 1:
                            
                            T1.display_data();
                            
                            break;
                    case 2:
                            O1.display_data();
                            
                            break;
                    case 3:
                           C1.display();
                           
                           break;
                    case 4:
                           R1.display();
                           
                           break;

                    default:
                         cout<<"Invalid Option " ;
                        break;
                    }   
            }


 
}