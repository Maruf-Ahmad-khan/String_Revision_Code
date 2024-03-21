#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void Max_Min(int n)
     {
          int maxi = INT_MIN;
          int mini = INT_MAX;
          int rem = 0;
          while (n != 0)
          {
               rem = n % 10;
               maxi = max(maxi, rem);
               mini = min(mini, rem);
               n = n / 10;
          }
          cout << "The maximun number in the given digit is :" << maxi << endl;
          cout << "The minimum number in the given digit is :" << mini << endl;
     }
     int SumofDigits(int n)
     {
          int sum = 0;
          for (int i = 0; i < n; i++)
          {
               int rem = n % 10;
               sum = sum + rem;
               n = n / 10;
          }
          return sum;
     }
};
int main()
{
     Solution solve;
     int n;
     cout << "Enter the value of n :" << endl;
     cin >> n;
     solve.Max_Min(n);

     int num;
     cout << "Enter the value of num :" << endl;
     cin >> num;
     int ans = solve.SumofDigits(num);
     cout << "The sum of digits are :" << ans << endl;
     return 0;
}