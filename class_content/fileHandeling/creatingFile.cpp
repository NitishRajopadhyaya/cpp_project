#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;
 
    file.open("creatfile.txt",ios::out); // creating a file

    if(!file)
    {
        cout<<"Error:Unsuccessful"<<endl;
    }
    else
        cout<<"File created succcessfully"<<endl;

  file.close();


}