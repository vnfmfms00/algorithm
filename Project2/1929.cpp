#include <iostream>

using namespace std;

int main()
{
	int prime[1000]; // �Ҽ� ����
	int pn = 0; // �Ҽ��� ����
	bool check[1000001] = { false }; // ���������� true

	check[0] = check[1] = true;

	int m, n;
	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++)
	{
		if (check[i] == false)
		{
			prime[pn++] = i;

			for (int j = i + i; j <= n; j = j + i)
			{
				check[j] = true;
			}
		}
	}

	for (int i = 0; i < pn; i++)
	{
		if (prime[i] >= m && prime[i] <= n)
			printf("%d\n", prime[i]);
	}

	return 0;
}
