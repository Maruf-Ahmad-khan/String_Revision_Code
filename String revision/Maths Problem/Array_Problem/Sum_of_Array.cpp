// 1: Take 20 elements from user input and find its sum with the help of an array.
#include<bits/stdc++.h>
using namespace std;
int Add_Elements(vector<int>&arr)
{
     int sum = 0;
     for(int i = 1; i <= arr.size(); i ++)
     {
       sum = sum + arr[i];
     }
     return sum;
}
int main()
{
     vector<int> arr;
     int n;
     cout<<"Enter the value of n : \n "<<endl;
     cin >> n;
     for(int i = 0; i < n; i ++)
     {
          arr.push_back(i * 1);
     }
     cout<<"The array elements are : \n"<<endl;
     for(int i = 0; i < n; i ++)
     {
          cout<<arr[i]<<" ";
     }
     cout<<endl;

     cout<<"The sum of the elements is : \n"<<Add_Elements(arr);
     return 0;
}