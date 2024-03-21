#include<bits/stdc++.h>
using namespace std;
string RemoveDuplicate(string s)
{
	string ans = "";
	int i = 0;
	while(i<s.length()-1)
	{
		if(ans.length() && ans[ans.length()-1]==s[i])
		{
			ans.pop_back();
		}
		else
		{
			ans.push_back(s[i]);
		}
		i++;
	}
	return ans;
}
int main()
{
	string s;
	cout<<"Enter a string :"<<endl;
	cin>>s;
	cout<<"The duplicate string is :"<<RemoveDuplicate(s)<<endl;
	return 0;
}