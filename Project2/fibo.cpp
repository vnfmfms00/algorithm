#include <iostream>

using namespace std;

// top down (���)
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

// top down�� bottom up �� ������ ��°ŷ� ����
// ���̽� ���� bottom up����. (stackoverflow�߻��� ����ϱ⶧��)
// bottom up (�ݺ�) 
// �ð� ���⵵: O(N)
int d[100];
int fibonacci2(int n)
{
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	return d[n];
}