#include<iostream>
using namespace std;
int main()
{    
    //arithematic operator

    int num1=10, num2=20,sum;
            /*cout<<"enter two number"<<endl;
            cin>>num1>>num2;*/
    sum=num1+num2; // here '+' is an arithematic operator . ('-','/','*')
    cout<<"sum of two num is \t"<<sum<<endl;

    //relational operator
           
            if(num1<num2) // here '<' is relational operator . Other eg ('==','>','!=')
             {
                 cout<<num2<<endl;
             } 

    //logical operator

              if(num1==10 && num2==20)  // here && is a logical operator. Other eg ('||','!')
                  {
                      cout<<"how are you"<<endl;
                  }        



     // assignment operator

               sum+=num2; // here '+=' is an assignment operator . Other eg('-=','/=','*=')
               cout<<"again sum \t"<<sum<<endl;            


     // bitwise operator
                
                cout<<(12 &  25)<<endl;  // here '&' is a bitwise operator. Other eg('|','~','^')
               

      //conditional operator
             int check;
            check = (num1>num2) ? num2 : num1 ;  // here '?' and ':' are conditional operator       
            cout<<check<<endl;
}
