#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> s;
	if (n == 0)
		cout << 0;

	while (n != 0)
	{
		if (n < 0)
		{
			int nr = -n;
			s.push(nr % 2);
			nr = nr / 2;
			if ((-n) % 2 != 0)
				nr++;
			n = nr;
		}
		else
		{
			s.push(n % 2);
			n = -(n / 2);
		}
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	cout << '\n';
	return 0;
}