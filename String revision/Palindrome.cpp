#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(char arr[])
{
	int n = strlen(arr);
	int j = n-1;
	for(int i = 0; i<n; i++)
	{
		if(arr[i]!=arr[j])
		{
			return false;
		}
		else
		{
			i++;
			j--;
		}
	}
	return true;
}
bool Palindrome(int n)
{
	if((n < 0 || n % 10 == 0) && (n < 0 || n != 0))
	{
		return 0;
	}
	int rev = 0;
	while(n > rev)
	{
		int rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	int vec = n == rev ;
	int res = n == rev / 10;
	int ans = vec || res;
	return ans;
}
int GCD(int n, int m)
{
	if(n > m)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	while(m % n != 0)
	{
		int temp = m % n;
		m = n;
		n = temp;
	}
	return n;
}
int main()
{
	char arr[100];
	cout<<"Enter a character:"<<endl;
	cin>>arr;
	cout<<"The character is :"<<isPalindrome(arr)<<endl;

	int n ;
	cout<<"Enter n: "<<endl;
	cin>>n;
	int ans = Palindrome(n);
	if(ans == true)
	{
		cout<<"The number is palindrome:"<<endl;
	}
	else
	{
		cout<<"The number is not palidrome :"<<endl;
	}

	int x ;
	int m;
	cout<<"Enter x value: "<<endl;
	cin >>x;
	cout<<"Enter m value: "<<endl;
	cin >>m;
	cout<<"The GCD is : \n"<<GCD(x, m)<<endl;
	return 0;

}