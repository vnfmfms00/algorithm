#include <iostream>

using namespace std;

int factorial_recursion(int n)
{
	if (n <= 1)
		return 1;

	return n * factorial_recursion(n - 1);
}

int factorial_iteration(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	cout << factorial_recursion(n) << '\n';
}