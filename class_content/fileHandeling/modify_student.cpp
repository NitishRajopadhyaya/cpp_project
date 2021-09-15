#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
{
    public:
        int roll;
        char name[20];

        void getdata()
        {
            cout<<"Enter name"<<endl;
            cin>>this->name;

            cout<<"Enter Roll"<<endl;
            cin>>this->roll;
        }

        void displaydata()
        {
            cout<<this->roll<<"\t"<<this->name<<endl;;
        }
    
     void edit()
     {
         fstream file;
         file.open("Student.dat",ios::in|ios::out|ios::binary);
         file.seekg(0,ios::end);
         
         
         cout<<"Enter Name";
         cin>>this->name;
         file.write(reinterpret_cast<char*>(this),sizeof(*this));
      file.close();

     }
};

int main()
{
    char ch='n';
    char name[20];
  Student s[3];
  fstream fin;
  int roll;
  
  fin.open("Student.dat",ios::in|ios::out|ios::binary);
  cout<<"roll"<<"\t"<<"Name"<<endl;
  cout<<endl;
   for(int i=0;i<3;i++)
   {
       fin.read((char*)&s[i],sizeof(s[i]));
       
       s[i].displaydata();
   }

   cout<<"Do you want to modify information? Y/N"<<endl;
    cin>>ch;

    while (ch=='y'||ch=='Y')
    {
        fin.open("Student.dat",ios::in|ios::out);
        for(int i=0;i<3;i++)
        {
            fin.read((char*)&s[i],sizeof(s[i]));
            s[i].displaydata();
        }

        cout<<"Enter the roll you want to modify"<<endl;
        cin>>roll;

          for (int i = 0; i < 3 ;i++)
          {
              fin>>s[i].roll;

              if(s[i].roll==roll)+
              {
                  fin>>s[i].name;
                  int pos = fin.seekg(20,ios::cur);
                    cout<<pos;
                  cout<<"Roll Number "<<s[i].roll<<endl;
                  cout<<"Name  "<<s[i].name<<endl;

                  cout<<"Enter modification"<<endl;
                  s[i].edit();

                //   strcpy(s[i].name,name);

                //   fin.seekp(pos);

                //   fin<<s[i].roll;
                //   fin<<s[i].name;


              }
          }
          
        fin.close();   

        cout<<"Do you want to modify again? Y/N"<<endl;
        cin>>ch;
    }
    
   
}
