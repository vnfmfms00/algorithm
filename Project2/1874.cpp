#include <iostream>
#include <stack>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	string result;
	int temp = 0;
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;

		if (num > temp)
		{
			for (int i = temp; i < num; i++)
			{
				s.push(i + 1);
				result += '+';
			}

			s.pop();
			result += '-';
			temp = num; // temp는 stack에 들어간 마지막 수
			//cout << "temp : " << temp << '\n';
		}
		else
		{
			bool found = false;
			if (!s.empty())
			{
				int top = s.top();
				s.pop();
				result += '-';
				if (num == top) {
					found = true;
				}
			}
			if (!found)
			{
				cout << "NO" << '\n';
				return 0;
			}
		}
	}

	for (char ch : result)
	{
		cout << ch << '\n';
	}
}