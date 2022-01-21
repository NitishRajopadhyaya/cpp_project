#include<iostream>
using namespace std;

const int Max =20;
 template<class temp>
  
 class stack
  {
      private:
         temp arr[Max];
         int top;

       public:
          stack()
          {
              top = -1 ;
          }     

          void push( temp data)
          {
             arr[++top] = data ;
          }

          temp pop()
          {
              return arr[top--];
          }

          float size()
          {
              return (top+1);
          }

};

int main()
{
    cout<<"Stack of floating data type "<<endl;
    stack<float> S1; // stack <int> S1 for integer data type

    cout<<"size of stack "<<S1.size()<<endl;
     S1.push(11.3f);
     S1.push(113.45f);
     S1.push(110.67f);

     cout<<"Size of stack "<<S1.size()<<endl;
     cout<<"Numbers popped "<<S1.pop()<<endl;
     cout<<"Numbers popped "<<S1.pop()<<endl;
     cout<<"size of stack "<<S1.size()<<endl;

     S1.push(134.78f);

     cout<<"size of stack "<<S1.size()<<endl;
   
}