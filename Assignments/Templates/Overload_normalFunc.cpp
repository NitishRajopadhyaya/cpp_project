#include<iostream>
#include<string.h>
using namespace std;

template<class temp>

temp find_max(temp var1 , temp var2)
{
      temp results;

           if(var1>var2)
             results=var1;

           else 
             results=var2;

         return results;      
}

char *find_max (char *CH1 , char *CH2)
{
    char * results;

       if(strcmp(CH1,CH2)>0)
           results = CH1;

        else 
            results=CH2;   
   
      return results;
        
}

int main()
{
     int I1 , I2;
    string Cha1 ,cha2;
     cout<<"Enter two Integers "<<endl;
     cin>>I1>>I2;

     cout<<"LArgest number between entered value is "<<find_max(I1,I2)<<endl;


     cout<<"Enter Two strings "<<endl;

     getline(cin,Cha1);
     cout<<endl;

     getline(cin,cha2);

     cout<<"Largest string is "<<find_max(Cha1,cha2)<<endl;

}
