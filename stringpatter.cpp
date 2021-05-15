#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  //char name[20];
  //cout<<"enter name";
  //gets(name);
  //int b ;
  //b=strlen(name);
  for(int i=0;i<=5;i++)
  {
      for(int j=0;j<i;j++)
         cout<<" ";
      for(int k=i;k<=5;k++)
           cout<<"*";//cout<<name[k];
      for(int f=5;f>=i;f--)
                cout<<"*";//cout<<name[f];
      cout<<endl;
      
  }
}