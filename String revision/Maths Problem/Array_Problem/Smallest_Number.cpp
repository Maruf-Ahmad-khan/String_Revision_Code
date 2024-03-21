#include <bits/stdc++.h>
using namespace std;
class Smallest
{
public:
     // Find Maxm and Minm element in a given array
     int Smallest_Number(vector<int> &nums)
     {
          int mini = INT_MAX;
          for (int i = 0; i < nums.size(); i++)
          {
               if (nums[i] < mini)
                    mini = nums[i];
          }
          return mini;
     }
     int Maximum_Number(vector<int> &arr)
     {
          int maxi = INT_MIN;
          for (int i = 0; i < arr.size(); i++)
          {
               if (arr[i] > maxi)
                    maxi = arr[i];
          }
          return maxi;
     }
     // Add digits
     // Given an integer num, repeatedly add all its
     //  digits until the result has only one digit, and return it.
     // Input: num = 38
     // Output: 2
     // Explanation: The process is
     // 38 --> 3 + 8 --> 11
     // 11 --> 1 + 1 --> 2
     // Since 2 has only one digit, return it.

     int AddDigits(int num)
     {
          while (num > 9)
          {
               int rev = 0, rem;
               while (num != 0)
               {
                    rem = num % 10;
                    rev = rev + rem;
                    num = num / 10;
               }
               num = rev;
          }
          return num;
     }

     // Input:
     // N = 4
     // Output:
     // 1
     // Explanation:
     // 4 is not divisible by 100
     // and is divisible by 4 so its
     // a leap year
     int LeapYear(int Year)
     {
          if (Year % 400 == 0)
               return 1;
          else if (Year % 4 == 0 && Year % 100 != 0)
               return 1;
          else
               return 0;
     }
     // Given a signed 32-bit integer x,
     //  return x with its digits reversed.
     // If reversing x causes the value to go
     //  outside the signed 32-bit integer range
     //  [-231, 231 - 1], then return 0.

     // Example 1:
     // Input: x = 123
     // Output: 321

     // Example 2:
     // Input: x = -123
     // Output: -321

     // Example 3:
     // Input: x = 120
     // Output: 21

     int Reverse(int x)
     {
          int rem, rev = 0;
          while (x != 0)
          {
               rem = x % 10;
               if ((rev > INT_MAX / 10) || (rev < INT_MIN) / 10)
               {
                    return 0;
               }
               rev = (rev * 10) + rem;
               x = x / 10;
          }
          return rev;
     }
     // Power of 2.
     // Given an integer n, return true if it is a power of two. Otherwise, return false.

     // An integer n is a power of two, if there exists an integer x such that n == 2x.

     // Example 1:
     // Input: n = 1
     // Output: true
     // Explanation: 20 = 1

     // Example 2:
     // Input: n = 16
     // Output: true
     // Explanation: 24 = 16

     // Example 3:
     // Input: n = 3
     // Output: false
     bool PowerofTwo(int n)
     {
          // base condition
          if (n < 1)
               return 0;
          while (n != 1)
          {
               if (n % 2 == 1)
                    return 0;
               n = n / 2;
          }
          return 1;
     }
};
int main()
{
     Smallest small;
     vector<int> nums;
     int n;
     cout << "Enter n : \n"
          << endl;
     cin >> n;
     cout << "The array is : \n"
          << endl;
     for (int i = 1; i <= n; i++)
     {
          nums.push_back(i * 1);
     }
     for (int i = 0; i < n; i++)
     {
          cout << nums[i] << " ";
     }
     cout << endl;
     int mini = small.Smallest_Number(nums);

     cout << "The minimum number of the array is : \n"
          << mini << endl;

     int maxi = small.Maximum_Number(nums);

     cout << "The maximum number of the array is : \n"
          << maxi << endl;

     int num;
     cout << "Enter the Digits : \n";
     cin >> num;

     cout << "The sum of digits are in single digit : \n"
          << small.AddDigits(num) << endl;

     int Year;
     cout << "Enter the year to check leap year: \n"
          << endl;
     cin >> Year;

     if (small.LeapYear(Year) == 1)
     {
          cout << "This is Leap a Year: " << endl;
     }
     else
     {
          cout << "This is not a Leap Year: " << endl;
     }

     int x;
     cout << "Enter the value of x : \n"
          << endl;
     cin >> x;
     cout << "The reverse value of x is :\n"
          << small.Reverse(x) << endl;

     int ans;
     cout << "Enter ans : \n"
          << endl;
     cin >> ans;
     cout << "The power of 2 is : \n"
          << small.PowerofTwo(ans) << endl;
     return 0;
}