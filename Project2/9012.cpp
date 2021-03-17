#include <iostream>
#include <string>

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
		string str, result;
		getline(cin, str);
		int count = 0;

		for (char ch : str)
		{
			if (ch == '(')
				count++;
			else
				count--;

			if (count < 0)
			{
				result = "NO";
				break;
			}
		}

		if (count == 0)
			result = "YES";
		else
			result = "NO";

		cout << result << '\n';
	}

}