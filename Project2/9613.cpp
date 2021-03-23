#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int gcd2(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int a[100] = { 0 };
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		long long sum = 0;
		for (int k = 0; k < n - 1; k++)
		{
			for (int m = k + 1; m < n; m++)
			{
				sum += gcd(a[k], a[m]);
			}
		}
		cout << sum << '\n';
	}
}