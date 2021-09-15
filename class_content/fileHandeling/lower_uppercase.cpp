#include<iostream>
#include<fstream>
#include<ctype.h>
//#include<string.h>
using namespace std;

int main()
{
   fstream filein;
   fstream filecopy;
   char content[10];
   filein.open("copy.dat",ios::out|ios::in);

   cout<<"Enter data"<<endl;
   cin.getline(content,10);

   filein<<content;

   filein.close();
    
    filein.open("copy.dat",ios::in|ios::binary);
   filecopy.open("paste.dat",ios::out|ios::binary);

   char ch;
   while(!filein.eof())
   {
       filein>>ch;
       cout<<ch;

   if(islower(ch))
      ch=toupper(ch);
   else
      ch=towlower(ch);

      filecopy<<ch;
   }

   filein.close();
   filecopy.close();
   }
