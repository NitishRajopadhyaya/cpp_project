#include<iostream>
using namespace std;

template<class temp>
 temp compare(temp T1 , temp T2)
 {
     temp result;
        if(T1>T2)
          return T1;
        else 
           return T2;  
 }

 template<class temp1 ,class temp2>
  
   int compare(temp1 T1 , temp2 T2)
   {
          if(T1>T2)
          return T1;
        else 
           return T2;
   }

   int main()
   {
       cout<<compare(1,2); // calls func compare(temp T1 ,temp T2 ) , here data type is same


    cout<<endl;
       cout<<compare(2,'A'); //calls func compare(temp1 T1 ,temp2 ,T2) becuase we have sent diff data types
   }