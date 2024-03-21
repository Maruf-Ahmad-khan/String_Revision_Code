// Find all Palindrome Numbers in a given range
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
     if((n < 0 || n % 10 == 0) && (n < 0 || n != 0))
     {
          return false;
     }
     int rev = 0;
     while(n > rev)
     {
          int rem = n % 10;
          rev = rev * 10 + rem;
          n = n / 10;
     }
     return n == rev || n == rev / 10;
}
int main()
{
     int min ;
     int max ;
     cout<<"Enter min value:"<<endl;
     cin>>min;
     cout<<"Enter max value :"<<endl;
     cin>>max;
     cout<<"The palindromes are : "<<endl;
     for(int i = min; i <= max; i ++)
     {
          if(isPalindrome(i))
          {
               cout<< i <<" ";
          }
          
     }
     return 0;
}