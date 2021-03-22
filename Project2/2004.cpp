#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n, m;
	cin >> n >> m;

	long long two_count = 0;
	long long five_count = 0;

	for (long long i = 2; i <= n; i *= 2)
	{
		two_count += n / i;
	}

	for (long long i = 2; i <= n - m; i *= 2)
	{
		two_count -= (n - m) / i;
	}

	for (long long i = 2; i <= m; i *= 2)
	{
		two_count -= m / i;
	}

	for (long long i = 5; i <= n; i *= 5)
	{
		five_count += n / i;
	}

	for (long long i = 5; i <= n - m; i *= 5)
	{
		five_count -= (n - m) / i;
	}

	for (long long i = 5; i <= m; i *= 5)
	{
		five_count -= m / i;
	}

	cout << min(two_count, five_count) << '\n';
	
	return 0;
}