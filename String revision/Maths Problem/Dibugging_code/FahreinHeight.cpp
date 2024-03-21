#include<bits/stdc++.h>
using namespace std;
class temp 
{
   float Fahrenheit;
   float Celcius;
   public:
   void getdata(void);
   void display(void);
};

void temp :: getdata(void)
{
     cout<<"Enter the value of Fahrenheit :"<<endl;
     cin >> Fahrenheit;
     Celcius = (Fahrenheit - 32) * 5 / 9;
}

void temp :: display(void)
{
     cout<<"The temperature in Fahrenheit is :"<<Fahrenheit<<endl;
     cout<<"The temperature in Celcius is :"<<Celcius<<endl;
}

// // This can be true too 
// #include<iostream>
// using namespace std;
// class temp
// {
//    float Fahrenheit;
//    public:
//    void Area(float F)
//    {
//      Fahrenheit = F;
//       float Celcius = (Fahrenheit - 32) * 5 / 9 ;
//      cout<<"The temperature in Celcius is :"<< Celcius <<endl;
//    }
// };


// int main()
// {
//      temp t;
//      float F;
//      cout<<"Enter the temperature in Fahrenheit :"<<endl;
//      cin >> F;
//      t.Area(F);
//      return 0;
// }


int main()
{
     temp t;
     t.getdata();
     t.display();
     return 0;
}