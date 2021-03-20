#include <iostream>

using namespace std;

bool prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int t;
	scanf("%d", &t);

	int num;
	int count = 0;

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &num);
		if (prime(num))
			count++;
	}

	printf("%d\n", count);
	return 0;
}