#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int>&arr, int key)
{
     for(int i = 0; i < arr.size(); i ++)
     {
          if(arr[i] == key)
          return i;
     }
     return - 1;
}
int main()
{
     vector<int> arr = {1,2,3,4,5};
     int key_element = 3;
     if(LinearSearch(arr, key_element) != -1)
     {
     cout<<"The key element is present at index : \n" <<LinearSearch(arr, key_element)<<endl;
     }
     else
     {
          cout<<"The key element is not present : \n"<<endl;
     }
     return 0;
     
}