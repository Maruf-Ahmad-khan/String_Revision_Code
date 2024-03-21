#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string longestcommonprefix(vector<string> &strs)
     {
          string ans = "";
          int i = 0;
          while (true)
          {
               int curr_id = 0;
               for (auto str : strs)
               {
                    if (i >= strs.size())
                    {
                         curr_id = 0;
                         break;
                    }
                    if (curr_id == 0)
                    {
                         curr_id = str[i];
                    }
                    else if (str[i] != curr_id)
                    {
                         curr_id = 0;
                         break;
                    }
               }
               if (curr_id == 0)
               {
                    break;
               }
               i++;
               ans.push_back(curr_id);
          }
          return ans;
     }
     int findlength(vector<char> &name)
     {
          int length = 0;
          int i = 0;
          while (name[i] != '\0')
          {
               length++;
               i++;
          }
          return length;
     }
     // Give an array return True if any value present more than one time and False if not
     bool containDuplicate(vector<int> &arr)
     {
          sort(arr.begin(), arr.end());
          for (int i = 1; i < arr.size(); i++)
          {
               if (arr[i] == arr[i - 1])
                    return true;
          }
          return false;
     }
     // Maxm height of the water
     int maxarea(vector<int> &height)
     {
          int left = 0;
          int water = 0;
          int right = height.size() - 1;
          while (left <= right)
          {
               water = max(min(height[left], height[right]) * (right - left), water);
               if (height[left] < height[right])
               {
                    left++;
               }
               else
               {
                    right--;
               }
          }
          return water;
     }
    
};

int main()
{
     Solution solve;
     // for longest common prefix
     vector<string> strs = {"flower", "flow", "flight"};
     string ans = solve.longestcommonprefix(strs);
     cout << "The longest common prefix will be : " << ans << endl;

     // for finding length of name
     vector<char> name(100);
     cout << "Enter your name :" << endl;
     cin >> name.data();
     cout << "Your name length is :" << solve.findlength(name) << endl;

     // for finding duplicates
     vector<int> arr = {1, 1, 2, 3, 4};
     if (solve.containDuplicate(arr) == true)
     {
          cout << "Array contain duplicate:" << endl;
     }
     else
     {
          cout << "No duplicate in the array :" << endl;
     }

     // Height water level
     vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
     cout << "The height of the water is : " << solve.maxarea(height) << endl;
      return 0;
}