#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getline(char name[])
{
	int length = 0;
	int i = 0 ;
	while(name[i]!='\0')
	{
		length ++;
		i ++;
	}
	return length;
}
int main()
{
	char name[100];
	cout<<"Enter name : "<<endl;
	cin>>name;
	cout<<"The length of the name is :"<<getline(name)<<endl;
	cout<<"The length of the name is :"<<strlen(name)<<endl;
	return 0;
}