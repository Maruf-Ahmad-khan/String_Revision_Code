#include <bits/stdc++.h>
using namespace std;
// Base condition
int countPrime(int n)
{
	if (n == 0)
		return 0;
	//		assigning all the numbers
	vector<bool> prime(n, true);
	prime[0] = prime[1] = false;
	int ans = 0;
	for (int i = 2; i < n; i++)
	{
		if (prime[i])
		{
			ans++;

			int j = 2 * i;
			while (j < n)
			{
				prime[j] = false;
				j += i;
			}
		}
	}
	return ans;
}
int main()
{
	int n;
	cout << "Enter the value of n:" << endl;
	cin >> n;
	cout << "The prime number is :" << countPrime(n) << endl;
	return 0;
}