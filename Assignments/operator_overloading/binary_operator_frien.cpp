 // operator have two paramteres

 #include<iostream>
 using namespace std;
 class distances
 {
     int feet , inch ;

     public:

         friend distances operator +(distances &d1 , distances &d2);
         distances()
         {
             this->inch=0;
             this->feet=0;
         }

         distances( int feet1 , int inch1)
         {
             this->feet= feet1;
             this->inch = inch1;
         }

        void displaydata()
        {
            cout<<" Total feet = "<<this->feet<<endl;
            cout<<" Total inch = "<<this->inch;
        }
       // friend distances operator + (distances &d2); 
 };

 distances operator + (distances &d1 , distances &d2)
 {
     distances D3;

      D3.feet = d1.feet + d2.feet;
      D3.inch = d1.inch + d2.inch; 

      return D3;
 }

 int main()
 {
      distances D1(10,2);
      distances D2(4,5) ;
      distances D3;

      D3 = D1 + D2 ;

      D3.displaydata();
 }
