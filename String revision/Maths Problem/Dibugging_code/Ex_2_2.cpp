#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//      short i = 2500, j = 3000;
//      cout<<"i+j = " << -(i + j);
// }

// How to append elements in an empty array
// #include <iostream>
// #include <vector>

// int main() {
//     // Create a vector to store 10 elements
//     std::vector<int> dynamicArray;

//     // Populate the vector with 10 elements
//     for (int i = 1; i <= 10; ++i) {
//         dynamicArray.push_back(i * 1); // Just an example, you can input your own values
//     }

//     // Display the elements
//     std::cout << "Elements in the dynamic array:" << std::endl;

//     for (int i = 0; i < dynamicArray.size(); ++i) {
//         std::cout << dynamicArray[i] << " ";
//     }

//     std::cout << std::endl;

//     return 0;
// }

int main()
{
     vector<int> ans;
     int n;
     cout<<"Enter n : "<<endl;
     cin >> n;
     cout<<"Your array is : "<<endl;
     for(int i = 1; i <= n; ++i)
     {
          ans.push_back(i * 1);
     }
     // Display the element
     cout<<"The elements in the array :"<<endl;
     for(int i = 0; i < n; i ++)
     {
          cout<<ans[i]<<"\n";
     }
     cout<<endl;
     return 0;
}



 