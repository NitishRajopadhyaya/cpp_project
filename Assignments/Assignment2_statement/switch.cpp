#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum,pro,diff,quo;
    int num1,num2;
    cout<<"enter two number"<<endl;
    cin>>num1>>num2;
     system("cls");
        cout<<"press 1 for addition"<<endl;
        cout<<"press 2 for subtraction"<<endl;
        cout<<"press 3 for multiplication"<<endl;
        cout<<"press 4 for division"<<endl;
        cin>>n;
    system("cls");
      switch(n)
           {
                case 1:
                      sum=num1+num2;
                        cout<<"sum of two number is \t "<<sum;
                        break;
                case 2:
                        if(num1>num2)
                           diff=num1-num2;
                         else 
                           diff=num2-num1;
                        cout<<"difference of two number is \t"<<diff;
                        break;
                case 3:
                          pro=num1*num2;
                          cout<<"product of two is \t"<<pro;
                          break;
                case 4:                              
                         quo=num1/num2;
                         cout<<"quotient is \t"<<quo;
                         break;
                 default:
                      cout<<"invalid numeber"<<endl;        
           } 
      
    

}