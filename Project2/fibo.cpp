#include <iostream>

using namespace std;

// �ð� ���⵵ : ������ ���� x ���� 1�� Ǫ�µ� �ɸ��� �ð� : O(N)
int memo[100]; // memo[i] = 0 : ���� ������ ���� ����
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
	{
		// ������ ���ߴٸ� �ٷ� ����(memoization)
		if (memo[n] > 0)
			return memo[n];

		memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return memo[n];
	}
}