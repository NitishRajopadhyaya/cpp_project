#include<iostream>
using namespace std;
class Shape
{
    protected:
       int width , height;

     public:
         Shape( int x =0 , int y = 0)
         {
                width = x ;
                height = y;

               
         } 

           void area()
         {
             cout<<"parent class area"<< width * height;
         } 

 };

 class Rectangle : public Shape
 {
    public:
       Rectangle(int x , int y)
       {
           width = x;
           height =y; 
       }

                 void area()
                 {
                     cout<< "area of reactangle"<<width * height<<endl;
                 }

                 
 };

 class Triangle : public Shape
 {

     public:
      Triangle(int x , int y)
      {
          width = x;
          height = y;

      }

      void area()
      {
          cout<<"Triangle area : "<<(width*height)/2<<endl;
      }
 };

 int main()
 {
     Shape *shape;
     Rectangle R1(10,15);
     Triangle T1(20,5);

     shape = &R1 ;
     shape->area(); // shape class ko area call huncha  kinaki , yo statement le , " ma kun class ko pointer ho tei class ko function call garchu jasto bhayo"

     shape = &T1; // i.e adrress k store bhairacha ignore gardiyo , pointer object jasto kaam garyo
     shape->area();

     
 }