#include<iostream>
using namespace std;
class wall
{
    private:
        float length,breadth;

     public:

           wall(float len , float bre)
           {
               length=len;
               breadth=bre;
           }    

            wall(wall &wall1)
            {
                length= wall1.length;
                
                breadth= wall1.breadth;

            }

            int calculate()
            {
                return length*breadth;
            }
};

int main()
{
    wall w1(11.1f,23.4f);
      cout<<"Area is "<<w1.calculate()<<endl;

    wall w2 = w1; // syntax to call copy constructor 
       cout<<"Area is "<<w2.calculate()<<endl;    
         
}