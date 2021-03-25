#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s1, s2;
	
	char a[1000000];
	cin >> a;

	int len = strlen(a);

	for (int i = 0; i < len; i++)
	{
		s1.push(a[i] - '0');
	}


	int idx = 0;
	int result = 0;
	while (!s1.empty())
	{
		if (idx == 0)
			result += s1.top();
		else if (idx == 1)
			result += 2 * s1.top();
		else if (idx == 2)
			result += 4 * s1.top();
		s1.pop();
		idx++;
		if (idx > 2)
		{
			idx = 0;
			s2.push(result);
			result = 0;
		}
	}

	// 예외경우 : 0100 => 04 출력해야함
	if (idx != 0)
		s2.push(result);

	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();
	}

	cout << '\n';
	return 0;
}