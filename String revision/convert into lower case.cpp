#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void ConvertlowerCase(char arr[]) {
	int n = strlen(arr);
	int j = n - 1;
	for(int i = 0; i<n; i++) {
		arr[i] = arr[i] - 'a' + 'A';
	}
}
int main() {
	char arr[100];
	cout<<"Enter the array : "<<endl;
	cin>>arr;
	ConvertlowerCase(arr);
	cout<<"The lowercase of the string is :"<<arr<<endl;
	return 0;
}