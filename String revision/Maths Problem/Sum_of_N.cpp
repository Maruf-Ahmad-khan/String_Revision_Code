#include <bits/stdc++.h>
using namespace std;
class solve
{
public:
     //   Sum of N natural number
     long long sum = 0;
     long long Sum_N(long long n)
     {
          if (n > 0)
          {
               sum = sum + n;
               Sum_N(n - 1);
          }
          return sum;
     }
     //   Greatest Common Division Eucleadian Algorithm
     int gcd(int a, int b)
     {
          while (a > 0 && b > 0)
          {
               if (a > b)
                    a = a % b;
               else
                    b = b % a;
          }
          if (a == 0)
               return b;
          return a;
     }
     char convert(char ch)
     {
          char value = ch - 'a' + 'A';
          return value;
     }
     bool ArmstrongNumber(int N)
     {
          int number = N;
          int rem;
          int sum = 0;
          while (N != 0)
          {
               rem = number % 10;
               sum = sum + pow(rem, 3);
               number = number / 10;
          }
          if (sum == N)
          {
               return true;
          }
          else
          {
               return false;
          }
     }
};
int main()
{
     solve solv;
     long long n;
     cout << "Enter n : " << endl;
     cin >> n;
     long long sum = solv.Sum_N(n);
     cout << "The Sum of First N is :" << sum << endl;

     int a;
     int b;
     cout << "Enter a :" << endl;
     cin >> a;
     cout << "Enter b: " << endl;
     cin >> b;
     int HCF = solv.gcd(a, b);
     cout << "The gcd of the given number is : " << HCF << endl;

     char ch;
     cout << "Enter char :" << endl;
     cin >> ch;
     cout << "The converted character will be : " << solv.convert(ch) << endl;
     int N;
     cout << "Enter a Number  N: " << endl;
     cin >> N;
     bool ans = solv.ArmstrongNumber(N);
     if (ans == true)
     {
          cout << "The number is Armstrong :" << endl;
     }
     else
     {
          cout << "The number is not Armstrong :" << endl;
     }
     return 0;
}