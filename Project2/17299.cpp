#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	vector<int> a(t);
	vector<int> ans(t);
	vector<int> f(1000000);

	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
		f[a[i]] += 1;
	}

	stack<int> s;
	s.push(0);

	for (int i = 1; i < t; i++)
	{
		while (!s.empty() && f[a[s.top()]] < f[a[i]])
		{
			ans[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}

	while (!s.empty())
	{
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}