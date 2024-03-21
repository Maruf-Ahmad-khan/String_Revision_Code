#include <bits/stdc++.h>
using namespace std;
bool Checkpalindrome(string str, int left, int right) {
	while(left<= right) {
		if(str[left]!=str[right]) {
			return false;
			left++;
			right--;
		}
	}
	return true;
}
bool Validpalindrome(string str) {
	int left = 0;
	int right = str.length()-1;
	while(left<=right) {
		if(str[left]!=str[right]) {
			return Checkpalindrome(str, left+1, right) || Checkpalindrome(str, left, right-1);
		} else {
			left++;
			right--;
		}
	}
	return true;
}
int main() {
	string str;
	cout<<"Enter the string :"<<endl;
	cin>>str;
	cout<<"The valid palindrome is :"<<Validpalindrome(str)<<endl;
	return 0;
}