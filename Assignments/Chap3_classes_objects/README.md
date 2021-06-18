# Constructor Overloading

A constructor is a special function that has same name as that of class, which is called when a object of a **Class** is created. Constructor are of three types.

1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor


Talking about **Constructor Overloading**.
It is same as Function Overloading.  Here, the Function have same name but different parameters.

The only diffference is , Constructor does not require return type while declaration , whereas in Function Overloading return type must be declared.
***
For Example ,
    If we create Class named **Area**.
```C++
Area(int len , int breath)
 {
     cout<<"Area of Rectangle is " <<len*breath;
 }
 ```
 Here `Area(int len ,int breath)` is a Parameterized Constructor of Class **Area** having two parameters.

 ```C++
 Area(int len ,int breath , int height)
 {
     cout<<"Area of cuboid is "<<len*breath*height;
}
```
Here ` Area(int len ,int breath , int height)` is also a Parameterized Constructor of Class **Area** having three parameters.
***

Hence, both are Constructor of Class **Area** but have Different Parameters . It is called **Constructor Overloading**.

Now , When  we creat an object of Class **Area**
```C++
int main()
{
    Area A1(5,3); // calls constructor having two parameters
    Area A2(3,4,5); // Calls Constructor having three parameters
}
```
Output will be
```
Area of Rectangle is 15
Area of Cuboid is 60
```
***
    
     







