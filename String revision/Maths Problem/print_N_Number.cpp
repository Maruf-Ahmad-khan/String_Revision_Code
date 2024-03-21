#include <bits/stdc++.h>
using namespace std;
void Print(vector<int> &ans, int n)
{
     if (n < 1)
          return;
     ans.push_back(n);
     Print(ans, n - 1);
}
vector<int> PrintNos(int n)
{
     vector<int> ans;
     Print(ans, n);
     return ans;
}
void print(int x, vector<int> &res, int i)
{
     if (i == x)
     {
          res.push_back(i);
          return;
     }
     res.push_back(i);
     print(x, res, i + 1);
}
vector<int> printNos(int x)
{
     vector<int> res;
     print(x, res, 1);
     return res;
}
void Names(int i, vector<string>&value)
{
     if(i <= 0)
     {
          return ;
     }
     value.push_back("Coding");
     Names(i - 1, value);
}
vector<string> printNTimes(int v) 
{
     vector<string>value;
     Names(v, value);
     return value;
}
int main()
{
     int n;
     cout << "Enter the n : \n";
     cin >> n;
     vector<int> ans = PrintNos(n);
     cout << "The result is : \n";
     for (int i = 0; i < ans.size(); i++)
     {
          cout << ans[i] << " ";
     }
     cout << endl;

     int x;
     cout << "Enter the x : \n";
     cin >> x;
     vector<int> res = printNos(x);
     cout << "The result is : \n";
     for (int i = 0; i < res.size(); i++)
     {
          cout << res[i] << " ";
     }
     cout << endl;
     int v;
     cout << "Enter the v : \n";
     cin >> v;
     vector<int> value = printNos(v);
     cout << "The result is : \n";
     for (int i = 0; i < value.size(); i++)
     {
          cout << value[i] << " ";
     }
     cout << endl;
     return 0;
}
