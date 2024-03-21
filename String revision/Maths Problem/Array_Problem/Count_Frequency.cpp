#include<bits/stdc++.h>
using namespace std;
void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
//     this below code means if the key or element is not present
//     then it automatically consider as zero and increase the count.
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    cout<<"The frequency given in the array is :"<<endl;
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}