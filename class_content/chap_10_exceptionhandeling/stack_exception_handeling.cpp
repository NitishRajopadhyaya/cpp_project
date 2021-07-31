#include<iostream>
using namespace std;
const int Max = 3;
class Stack
{ 
    private:
    
    int arr[Max] ;
    int top ;

    public:
          class Overflow{};
          class empty{};

          Stack()
          {
              top =-1;
          }

          void push( int data)
          {
              if(top>=Max-1)
                 throw Overflow();
              else
              {
                  arr[++top]=data;  
                  cout<<"Stack added"<<endl;;
              }
          }

          int pop()
          {
              if(top==-1)
                throw empty();
              else
              {   
                return arr[top--];
              
              }
          }

};

int main()
{
    Stack S1;
    try{
    S1.push(10);
    S1.push(20);
    S1.push(30);
    S1.push(40);
    S1.push(50);
    S1.push(60);

    
 } 

    catch(Stack::Overflow){
        cout<<"stack full"<<endl;
    }

    try{
        cout<<"Delteing data"<<endl;
        cout<<endl;
         cout<<"Stack delted"<<S1.pop()<<endl;
        cout<<"Stack deleted"<<S1.pop()<<endl;
        cout<<"Stack deleted"<<S1.pop()<<endl;
        S1.pop();
        S1.pop();
        S1.pop();
    }

    catch(Stack::empty)
    {
        cout<<"stack empty"<<endl;
    }
    

}