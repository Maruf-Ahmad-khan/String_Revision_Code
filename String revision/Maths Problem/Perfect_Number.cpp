//Check whether a number is Perfect Number or not
#include<bits/stdc++.h>
using namespace std;
class perfect{
public:
bool Perfect_Number(int n)
{
     int sum = 0;
     for(int i = 1; i < n - 1; i ++){
          if(n % i == 0)
          {
          sum = sum + i;
          }
     }
     if(sum == n)
     return true;
     else
     return false;
}
// Leap year 
bool leap_year(int year)
{
     if(year % 400 == 0)
     return true;
     if(year % 100 == 0)
     return false;
     if(year % 4 == 0)
     return true;
     return false;
}

// Find Sum of AP Series
float SumofAp(float a, float d, int num)
{
     float sum = 0;
     for(int i = 1; i <=num; i++)
     {
          sum = sum + d;
          a = a + d;
     }
     return sum;
}
bool SumofDigits(int x)
{
     int sum = 0;
     for(int i = 0; i < x - 1; i ++)
     {
          int rem = x % 10;
          sum = sum + rem;
          x = x / 10;
          if(sum % 3 == 0)
          return true;
          else
         return false;
     }
     return true;  
} 
};

int main()
{
     perfect ans;
     int n;
     cout<<"Enter the value of n: "<<endl;
     cin>>n;
     bool res = ans.Perfect_Number(n);
     if(res == true)
     {
          cout<<"Number is perfect :"<<endl;
     }
     else{
          cout<<"Number is not perfect:"<<endl;
     }

     // //Leap year 
     int year ;
     cout<<"Enter the year : "<<endl;
     cin >> year;
     bool L_Year = ans.leap_year(year);
     if(L_Year == true)
     {
          cout<<"Year is leap year:"<<endl;
     }
     else
     {
          cout<<"Year is not leap year :"<<endl;
     }

     // // // Find Sum of AP Series
     float a , d;
     cout<<"Enter the value of a :"<<endl;
     cin>>a;
     cout<<"Enter the value of d:"<<endl;
     cin>>d;
     int num ;
     cout<<"Enter the value of num: "<<endl;
     cin>>num;
     float sum = ans.SumofAp(a,d,num);
     cout<<"The sum of Ap is : "<<sum<<endl;

     // Find the sum and find the number of digits are divisible by 3 or not
     int x;
     cout<<"Enter the value of x :"<<endl;
     cin >> x;
     if(ans.SumofDigits(x))
     {
     cout<<"The number is divisible by 3  :" <<endl;
     }
     else
     {
          cout<<"The number is not divisible by 3 :"<<endl;
     }
     return 0;
}