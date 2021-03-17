#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
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
			s.push(num);
		}
		else if (cmd == "top")
		{
			cout << (s.empty() ? -1 : s.top()) << '\n';
		}
		else if (cmd == "size")
		{
			cout << s.size() << '\n';
		}
		else if (cmd == "empty")
		{
			cout << (s.empty() ? 1 : 0) << '\n';
		}
		else if (cmd == "pop")
		{
			if (s.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
		}
	}
}