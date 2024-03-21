#include <bits/stdc++.h>
using namespace std;
class Great
{
public:
     int Greatest(int a, int b)
     {
          int max;
          max = a > b ? a : b;
          return max;
     }
     int Greatest_3(int x, int y, int z)
     {
          int maxi;
          maxi = x > y ? ((x > z) ? x : z) : ((y > z) ? y : z);
          return maxi;
     }
};
int main()
{
     Great g;
     int a, b;
     cout << "Enter a : " << endl;
     cin >> a;
     cout << "Enter b :" << endl;
     cin >> b;
     int ans = g.Greatest(a, b);
     cout << "The greatest number is :" << ans << endl;
     int x, y, z;
     cout << "Enter x : \n";
     cin >> x;
     cout << "Enter y: \n";
     cin >> y;
     cout << "Enter z: \n";
     cin >> z;
     int res = g.Greatest_3(x, y, z);
     cout << "The greatest among 3 numbers is : \n"
          << res << endl;
     return 0;
}