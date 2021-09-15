#include<iostream>
#include<fstream>

using namespace std;

int main()
{ 
    int roll;

    fstream file;
 
    file.open("prac.txt",ios::out); // creating a file

    cout<<"Enter roll";
    cin>>roll;

    file<<roll<<endl;


  file.close();

  file.open("prac.txt",ios::in);

  file>>roll;

  cout<<"roll is"<<roll<<endl;

  file.close();


}