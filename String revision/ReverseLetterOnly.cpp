#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
string reverseLetterOnly(string s)
{
     int left = 0;
     int right = s.size() - 1;
     while(left <= right)
     {
          if(isalpha(s[left]) && isalpha(s[right]))
          {
               swap(s[left], s[right]);
               left ++;
               right --;
          }
          else if(!isalpha(s[left]) && !isalpha(s[right]))
          {
               left ++;
               right --;
          }
          else if(!isalpha(s[left]))
          {
               left ++;
          }
          else
          {
               right --;
          }
     }
     return s;
}
// Reverse string 
void reverseString(vector<char>&s)
{
     int left = 0;
     int right = s.size() - 1;
     while(left < right)
     {
          swap(s[left], s[right]);
          left ++;
          right --;
     }
}

string convert(string str, int Rownum)
{
     if(Rownum <= 1)
     return str;
     vector<string>v(Rownum, "");
     int j = 0, dir = -1;
     for(int i = 0 ; i < str.size(); i++)
     {
          if(j == Rownum - 1 || j == 0)
          dir = dir * (-1);
          v[j] = v[j] + str[i];
          if(dir == 1)
          j ++;
          else
          j --;
     }
     string ans ;
     for(auto &it : v)
     ans = ans + it;
     return ans;
}
int myAtio(string s)
{
     int num = 0, i = 0, sign = 1;
     while(s[i] == ' ')
     {
          i++;
     }
     if(i < s.size() && (s[i] == '-' || s[i] == '+'))
     {
          sign = s[i] == '+' ? 1 : -1;
          ++i;
     }
     while(i < s.size() && isdigit(s[i]))
     {
          if(num > INT_MAX / 10 || (num) == INT_MAX / 10 && s[i] > '7')
          {
               return sign == -1 ? INT_MIN : INT_MAX;
          }
          num = num * 10 + (s[i] - '0');
          ++i;
     }
     return num*sign;
}
int lengthOfLongestSubstring(string s)
{
     int maxlength = 0;
     vector<int> ans(128, -1);
     int left = 0;
     for(int right = 0; right < s.size(); right ++)
     {
          if(ans[s[right]] >= left)
          {
               left = ans[s[right]] + 1;
          }
          ans[s[right]] = left;
          maxlength = max(maxlength, right - left + 1);
     }
     return maxlength;
}

};

int main()
{
     string s ;
     Solution solve;
     cout<<"Enter s : "<<endl;
     cin >> s;
     string ans = solve.reverseLetterOnly(s);
     cout<<"The reverse letter is : "<<ans<<endl;

     vector<char> s1 = {'h','e','l','l','o'};
     cout<<"The reverse string will be : " <<endl;
     cout<<"Original String ";
     for(char ch : s1)
     {
          cout<< ch <<" ";
     }
     cout<< endl;
     solve.reverseString(s1);
     cout<<"Reversed String : ";
     for(char ch: s1)
     {
          cout<< ch << " ";
     }
     cout<< endl;

     string str = "PAYPALISHIRING";
     int Rownum = 3;
     cout<<"The zigzag conversion of the string is : "<<solve.convert(str, Rownum)<<endl;
     return 0;
}