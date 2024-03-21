#include<iostream>
using namespace std;
int getLength(char name[])
{
	int i = 0;
	int length = 0;
	while(name[i]!='\0')
	{
		length ++;
		i ++;
	}
	return length;
}
void ReverseString(char name[])
{
	int i = 0;
	int n = getLength(name);
	int j = n - 1;
	while(i<=j)
	{
		swap(name[i], name[j]);
		i++;
		j--;
	}
}
int main()
{
	char name[100];
	cout<<"Enter name :"<<endl;
	cin>>name;
	cout<<"The length of the name is :"<<getLength(name)<<endl;
	ReverseString(name);
	cout<<"Finally the name is : "<<name<<endl;
	return 0;
}