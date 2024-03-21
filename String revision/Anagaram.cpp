#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
	int FreqTable[256] = {0};
	for(int i = 0; i<s.length(); i++) {
		FreqTable[s[i]]++;
	}
	for(int i = 0; i<t.length(); i++) {
		FreqTable[t[i]]--;
	}
	for(int i = 0; i<256; i++) {
		if(FreqTable!=0) {
			return true;
		}
	}
	return false;
}
int main() {
	string s = "anagram";
	string t = "nagaram";
	cout<<"The anagram is :"<<isAnagram(s,t)<<endl;
	return 0;
}