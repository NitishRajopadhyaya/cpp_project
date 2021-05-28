#include<iostream>
using namespace std;
int main()
{
    int number[5],flag=0;
    cout<<"enter five numbers"<<endl;
      for(int i=0;i<5;i++)
        {
             cin>>number[i];
        }
      cout<<"positive numbers entered are"<<endl;
         for(int j=0;j<5;j++)
           {
                if(number[j]>0)
                {
                  cout<<number[j]<<"\t";
                  flag++;
                }
           } 
           if(flag==0)
           cout<<"you entered '0' positive numbers"; 
}