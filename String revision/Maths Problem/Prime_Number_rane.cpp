// Prime numbers in a given range
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
     if(n < 2)
     return false;
     for(int i = 2 ; i < sqrt(n); i ++)
     {
          if(n % i == 0)
          {
               return false;
          }
     }
     return true;
}

int main()
{
     int min;
     cout<<"Enter min value : "<<endl;
     cin>>min;
     int max;
     cout<<"Enter max value :"<<endl;
     cin>>max;
     cout<<"The range of Prime numbers are :"<<endl;
     for(int i = min; i <= max; i ++)
     {
          if(isPrime(i))
          {
               cout<< i << " ";
          }
     }
     return 0;
}