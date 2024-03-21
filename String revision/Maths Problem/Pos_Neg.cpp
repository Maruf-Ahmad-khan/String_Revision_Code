#include<bits/stdc++.h>
using namespace std;
bool Return(int n)
{
     if(n < 0)
     {
          return false;
     }
     return true;
}

int main()
{
     int n;
     cout<<"Enter the value of n: "<<endl;
     cin>>n;
     int ans = Return(n);
     if(ans)
     {
          cout<<"postive number :"<<endl;
     }
     else
     {
          cout<<"Negative number :"<<endl;
     }
     return 0;
}