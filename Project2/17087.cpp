#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, s;
	cin >> n >> s;

	int a[100000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = abs(a[i] - s);
	}
	
	int result = a[0];

	for (int i = 1; i < n; i++)
	{
		result = gcd(result, a[i]);
	}

	cout << result << '\n';
	return 0;
}