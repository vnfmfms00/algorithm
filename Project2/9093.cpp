#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		char str[1000];
		cin.getline(str, 1000);
		char* ptr = strtok(str, " ");
		while (ptr != NULL)
		{
			stack<char> s;

			while (*ptr != '\0')
			{
				s.push(*ptr);
				ptr++;
			}
			while (!s.empty())
			{
				cout << s.top();
				s.pop();
			}

			ptr = strtok(NULL, " ");
			if (ptr != NULL)
				cout << " ";
		}
		cout << '\n';
	}
}