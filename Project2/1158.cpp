#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> q;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	cout << "<";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < k - 1; j++)
		{
			int num = q.front();
			q.pop();
			q.push(num);
		}
		if (i == n) // 마지막 숫자만 콤마처리 안함
			cout << q.front();
		else
			cout << q.front() << ", ";
		q.pop();
	}
	cout << ">\n";
}