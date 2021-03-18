#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> q;
	int t;
	cin >> t;
	while (t--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (cmd == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size")
		{
			cout << q.size() << '\n';
		}
		else if (cmd == "empty")
		{
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == "front")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.front() << '\n';
		}
		else if (cmd == "back")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
				cout << q.back() << '\n';
		}
	}
}