#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	stack<int> s;

	if (str == "0")
		cout << str;
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			int n = str[i] - '0';

			for (int j = 0; j < 3; j++)
			{
				s.push(n % 2);
				n /= 2;
				if (i == 0 && n == 0)
					break;
			}

			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}
		}
	}
	
	return 0;
}