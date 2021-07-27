#include<iostream>
using namespace std;

 //const int max=20;

template<class temp>

class Stack
{
   private:
       int top;
       temp arr[20];

     public:
       Stack()
       {
           top=-1;
       }
       
       void push (temp data);
       temp pop();
       float size();
};

        template<class temp>

        void Stack<temp> :: push(temp data) // syntax for non _member function
        {
            arr[++top] =data;
        }

        // need to declare template for each member function delcared outside the class
        template<class temp> 
        temp Stack<temp>:: pop()
        {
            return arr[top--];
        }

        template<class temp>
        float Stack<temp>:: size()
        {
            return (top+1);
        }

int main()
{
    Stack <float> S1;

    cout<<" size of stack : "<<S1.size()<<endl;
    S1.push(110.45f);   
    S1.push(145.89f);   
    S1.push(1200.54f); 

    cout<<" Size of stack : "<<S1.size()<<endl;

    cout<<"POPed out value : "<<S1.pop()<<endl;

    cout<<"Size of stack : "<<S1.size()<<endl;

    cout<<" poped out value : "<<S1.pop()<<endl;

    cout<<"Size of stack : "<<S1.size()<<endl;
   
    S1.push(190.78f);

    cout<<"Size of stack : "<<S1.size()<<endl;
}


