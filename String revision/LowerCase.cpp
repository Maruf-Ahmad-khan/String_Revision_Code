#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
void ConvertUpperCase(char arr[]) {
	int n = strlen(arr);
	int j = n - 1;
	for(int i = 0; i<n; i++) {
		arr[i] = arr[i] - 'a' + 'A';
	}
}
int getLength(char name[]) {
        int length = 0;
        int i = 0; 

        while(name[i] != '\0') {
                length++;
                i++;
        }
        return length;
}
};
int main() {
     Solution solve;
	char arr[100];
	cout<<"Enter the string to convert it into upper case : "<<endl;
	cin>>arr;
	solve.ConvertUpperCase(arr);
	cout<<"The lowercase of the string is :"<<arr<<endl;

     char name[100] ;
     cout<<"Enter the string to find the lenght of the character: "<<endl;
     cin >> name;
     cout<<"The lenght of the character is : "<<solve.getLength(name)<<endl;
     
     return 0;
}