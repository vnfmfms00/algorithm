#include <iostream>

using namespace std;

bool check[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	check[0] = check[1] = true;

	// 에라토스테네스의 체 구현
	for (int i = 2; i <= 1000000; i++)
	{
		for (int j = i * 2; j <= 1000000; j += i)
		{
			check[j] = true;
		}
	}

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int count = 0;
		for (int i = 2; i <= n / 2; i++)
		{
			if (check[i] == false && check[n - i] == false)
				count++;
		}
		
		cout << count << '\n';
	}
	
	return 0;
}