#include<iostream>
#include<fstream>
 using namespace std;
int main()
{
    char data[40];
    ofstream outfile;

    outfile.open("afile.dat");

    cout<<"Writing into the file"<<endl;
    cout<<"Enter your name"<<endl;
    cin.getline(data,100);

    outfile<<data<<endl;

    cout<<"enter your age"<<endl;
    cin>>data;

    cin.ignore();

    outfile<<data<<endl;

    outfile.close();

    ifstream infile;

    infile.open("afile.dat");

    cout<<"Reading from the file"<<endl;

    infile>>data;

    cout<<"Your name is "<<data<<endl; // reads first entered data name 

    infile>>data;
    cout<<"Your age "<<data<<endl; // reads second enter data age

    infile.close();

    
}