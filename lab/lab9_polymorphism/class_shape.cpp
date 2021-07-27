#include<iostream>
using namespace std;
class Shape
{
    protected:
       int width , height;

     public:
         
           void get_data()
           {
                  width =0 ;
                  height =0 ;
            //    cout<<"Enter width :" <<endl;
            //    cin>>width;

            //    cout<<"Enter height : "<<endl;
            //    cin>>height;
           }

           virtual void display_area() // pronlem statement hatauna virtual keyword use  garincha
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

                 void display_area()
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

      void display_area()
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
     shape->display_area();

     shape = &T1;
     shape->display_area();

     
 }