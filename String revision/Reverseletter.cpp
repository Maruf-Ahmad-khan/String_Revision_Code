#include<bits/stdc++.h>
using namespace std;
string reverseOnlyLetter(string s) {
	int low = 0;
	int high = s.size() - 1;
	while(low < high) {
		if(isalpha(s[low]) && isalpha(s[high])) {
			swap(s[low], s[high]);
			low ++;
			high --;
		} else if(!isalpha(s[low])) {
			low ++;
		} else {
			high --;
		}
	}
	return s;
}

int main() {
	string s = "ab-cd";
	cout<<"The reverse letter is :"<<reverseOnlyLetter(s)<<endl;
	return 0;
}