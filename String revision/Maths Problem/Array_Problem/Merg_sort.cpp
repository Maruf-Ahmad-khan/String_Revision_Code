#include <bits/stdc++.h>
using namespace std;
int Merge(vector<int> &arr, int low, int mid, int high)
{
     int left = low;
     int right = mid + 1;
     int count = 0;
     vector<int> temp;
     while (left <= mid && right <= high)
     {
          if (arr[left] <= arr[right])
          {
               temp.push_back(arr[left]);
               left++;
               right++;
          }
          else
          {
               temp.push_back(arr[right]);
               count += (mid - left + 1);
               right++;
          }
     }
     while (left <= mid)
     {
          temp.push_back(arr[left]);
          left++;
     }
     while (right <= high)
     {
          temp.push_back(arr[right]);
          right++;
     }
     for (int i = low; i <= high; i++)
     {
          arr[i] = temp[i - low];
     }
     return count;
}
int MergeSort(vector<int> &arr, int low, int high)
{
     int count = 0;
     if (low >= high)
          return count;
     int mid = low + (high - low) / 2;
     count += MergeSort(arr, low, mid);
     count += MergeSort(arr, mid + 1, high);
     count += Merge(arr, low, mid, high);
     return count;
}
int countInversion(vector<int> &arr, int n)
{
     return MergeSort(arr, 0, n - 1);
}
int main()
{
     vector<int> arr = {5, 4, 3, 2, 1};
     int n = 5;
     int count = countInversion(arr, n);
     cout << "The number of inversion will be : " << count << endl;
     return 0;
}