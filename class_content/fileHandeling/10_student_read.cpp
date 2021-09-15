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
              cout<<"Enter roll"<<endl;
              cin>>this->roll;

              cout<<"Enter name"<<endl;
              cin>>this->name;
          }

          void displaydata()
          {
              cout<<this->roll<<" "<<this->name<<endl;
          }

        //   void modify()
        //   {
        //       cout<<"Enter name";
        //       cin>>thisB->name;
        //   }
};

int main()
{
    Student S2,S1;
    fstream file;
     char ch;

file.open("Student.dat",ios::in);
 for(int i=0 ;i<3 ;i++)
{
    file.read((char*)&S1,sizeof(S1));
    S1.displaydata();
}

file.close();

}

//      int roll;
//     file.open("Student.dat",ios::in|ios::binary);
//     file.seekg(0);
//     cout<<'Roll= 'sizeof(roll);
//     for(int i=0;i<3;i++)
//     {
        
//        file.read((char*)&S[i],sizeof(S[i])); 

//         S[i].displaydata();
        
//     }

//     file.close();

//     cout<<"do you want to edit information ?"<<endl;
//     cin>>ch;

//     while (ch=='y'||ch=='Y')
//     {
        
//         cout<<"Enter the roll you want to edit"<<endl;
//         cin>>roll;
//         char name[20];
//            file.open("Student.dat",ios::in|ios::out|ios::binary);
        
//             for(int i=0;i<3;i++)
//             {
//                 int pos = file.tellg();
               
//                  file>>S[i].roll;
//                  if(S[i].roll==roll)
//                 {
                    
//                    // file>>S[i].name;

                   
//                    cout<<S[i].roll<<"\t"<<S[i].name<<endl;
//                      S[i].getdata();
//                      file.seekp(pos);
//                       file.write(reinterpret_cast<char*>(S[i].name),sizeof(S[i]));
//                 }
                
            
                 
//             }
            
            
      
        
         
//       cout<<"do you want to edit information again ?"<<endl;
//       cin>>ch;
          
//     }

//     file.close();
    

// }