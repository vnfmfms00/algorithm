#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX + 1] = { false };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	check[0] = check[1] = true;

	for (int i = 2; i <= MAX; i++)
	{
		if (check[i] == false)
		{
			for (int j = i + i; j <= MAX; j += i)
			{
				check[j] = true;
			}
		}
	}

	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;

		int i;
		for (i = 2; i <= n; i++)
		{
			if (check[i] == false)
			{
				if (check[n - i] == false)
				{
					cout << n << " = " << i << " + " << n - i << '\n';
					break;
				}
			}
		}

		if (i > n)
			cout << "Goldbach's conjecture is wrong." << '\n';
	}

	return 0;
}