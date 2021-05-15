#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
     int ch;
     int num1,num2;
     //char name[20];
     //gets(name);
     cout<<"enter two number";
     cin>>num1>>num2;
     system("cls");
      float f;
     char wor;
  do
   { 
    cout<<"enter 1 to addition"<<endl;
    cout<<"enter 2 to subtract"<<endl;
    cout<<"enter 3 to multiply"<<endl;
    cout<<"enter 4 to divide "<<endl;
     cin>>ch;
     system("cls");//screen clear clrscr() used only in turbo
    
   
      switch (ch)
     {
     case 1:
          cout<<"added num is \t"<<num1+num2<<endl;
         break;
     case 2:
            cout<<"subracted num is \t"<<num1-num2<<endl; 
            break;
      case 3:
             cout<<"product is \t"<<num1*num2<<endl;
             break;
      case 4:
              f=num1/num2;
             cout<<"quotient is \t"<<f<<endl;
             break; 
      default:
         break;

     }
    cout<<"do you want to calculate again Y/N?"<<endl;
    cin>>wor; 
     }while(wor=='y'||wor=='Y');   
}