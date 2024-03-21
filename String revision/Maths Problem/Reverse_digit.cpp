#include <bits/stdc++.h>
using namespace std;
int reverse(int num)
{
     int rev = 0;
     while (num != 0)
     {

          if ((rev > INT_MAX / 100) || (rev < INT_MIN / 10))
          {
               return 0;
          }

          int rem = num % 10;
          rev = rev * 10 + rem;
          num = num / 10;
     }
     return rev;
}
int cube(int n)
{
     return n * n * n;
}

int main()
{
     int num;
     cout << "Enter value of n :" << endl;
     cin >> num;
     cout << "The reverse number is : " << reverse(num) << endl;
     int n;
     cout<<"Enter the value of n : "<<endl;
     cin >> n;
     cout<<"The cube of the number is : "<<cube(n)<<endl;
     return 0;
}