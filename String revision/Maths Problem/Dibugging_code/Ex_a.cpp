#include<bits/stdc++.h>
using namespace std;
int main()
{
//     int a = 4, b = 8, c = 3, d = 9, z;
//     z = a++ + ++b * c-- - --d;
//     cout<< a  <<" " << b <<" "<< c <<" " << d <<" " << z <<" "<< endl;
     //   int a = 14, b, c;
     //   a = a % 5;
     //   b = a / 3;
     //   c = a / 5 % 3;
     //   cout<< a <<" " << b << " " << c << " ";
     // int a = 15, b = 13, x, y;
     // y = a = b + 5 - b + 9 / 3;
     // cout<< y << " ";
     // float a = 12.4, b = 3.8;
     // cout<<"fixed :"<< setprecision(2);
     // cout<<"Sum :"<<a+b;
     int a, b;
     cout<<"Enter a :"<<endl;
     cin>>a;
     cout<<"Enter b:"<<endl;
     cin>>b;
     int max;
     max = a > b ? a : b;
     cout<<"Larger of " << a <<  " and " << b << " is \n "<<max <<endl;
    return 0;
}