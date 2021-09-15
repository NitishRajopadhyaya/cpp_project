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
         char nm[20];

         cout<<"Details of given roll"<<endl;
         cout<<"Roll no"<<roll<<endl;
         cout<<"name :"<<this->name<<endl;

         cout<<"Enter new name";
         cin>>nm;

         strcpy(name,nm);

     }
    
};

int main()
{
    char ch='n';
    
  Student s;
  Student S1;
  Student S2;
  fstream fin;
  int roll ;
  long pos;
  
  fin.open("Student.dat",ios::in|ios::out|ios::binary);
  cout<<"roll"<<"\t"<<"Name"<<endl;
  cout<<endl;
   for(int i=0;i<3;i++)
   {
       fin.read((char*)&s,sizeof(s));
       
       S2.displaydata();
   }

   

        cout<<"Enter the roll you want to modify"<<endl;
        cin>>roll;

        while(!fin.eof())
        {
            pos=fin.tellg();
            fin.read((char*)&s,sizeof(s));
            if(s.roll==roll)
            {
                s.edit();
        

            fin.seekg(pos);
            fin.write((char*)&s,sizeof(s));
            break;

            }
        }
  fin.seekg(0);

  cout<<"Now modification is"<<endl;

  while(!fin.eof())
  {
      fin.read((char*)&S1,sizeof(S1));
      S1.displaydata();
  }

fin.close();
return 0;

}