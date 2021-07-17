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

           virtual void area() // pronlem statement hatauna virtual keyword use  garincha
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
     shape->area();

     shape = &T1;
     shape->area();

     
 }