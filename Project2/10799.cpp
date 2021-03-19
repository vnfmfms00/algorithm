#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int idx = 0;
	string str;
	cin >> str;

	stack<int> s;
	int count = 0;

	for (char ch : str)
	{
		if (ch == '(')
		{
			s.push(idx);
			idx++;
		}
		else if (ch == ')')
		{
			// 레이저 일때
			if (idx - s.top() == 1)
			{
				s.pop();
				count += s.size();
			}
			// 쇠막대기 끝일때
			else
			{
				s.pop();
				count += 1;
			}
		}
	}

	cout << count << '\n';
}
