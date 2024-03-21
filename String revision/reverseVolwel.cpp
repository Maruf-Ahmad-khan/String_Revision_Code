#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
bool isVowel(char ch)
{
 ch = tolower(ch);
 return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';	
}
string reverseVowel(string s)
{
	int start = 0;
	int end = s.size()-1;
	while(start<end)
	{
		if(isVowel(s[start]) && isVowel(s[end]))
		{
			swap(s[start], s[end]);
			start ++;
			end --;
		}
		else if(isVowel(s[start]) == 0)
		{
			start ++;
		}
		else
		{
			end --;
		}
	}
	return s;
}
     // Longest palindromic substring
     bool isPalindrome(string&s, int left, int right)
     {
          while(left < right)
          {
               if(s[left]!=s[right])
               {
               return false;
               }
               left ++ ;
               right --;
          }
      return false;
     }
     string longestPalidromicSubstring(string s)
     {
          string ans = "";
          for(int i = 0; i < s.size(); i++)
          {
               for(int j = i; j < s.size(); j++)
               {
                    if(isPalindrome(s, i, j))
                    {
                         string t = s.substr(i, j - i + 1);
                         ans = t.size() > ans.size() ? t : ans;
                    }
               }
          }
          return ans;
     }
};
int main()
{
	Solution solve;
	string s = "hello";
	cout<<"The reverse string is :"<<solve.reverseVowel(s)<<endl;
     // Longest palindromic substring
     string dfg = "cbbd";
     string result = solve.longestPalidromicSubstring(dfg); 
     cout<<"The input string will be : "<<dfg<<endl;
     cout<<"The longest palidromic substring will be : "<<endl;
     cout<<result<<endl;
	return 0;

     
}