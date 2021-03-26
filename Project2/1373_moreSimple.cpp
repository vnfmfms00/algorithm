#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int n = str.length();
	if (n % 3 == 1)
	{
		cout << str[0];
	}
	else if (n % 3 == 2)
	{
		cout << 2 * (str[0] - '0') + (str[1] - '0');
	}

	for (int i = n % 3; i < n; i += 3)
	{
		cout << 4 * (str[i] - '0') + 2 * (str[i + 1] - '0') + (str[i + 2] - '0');
	}
	cout << '\n';
	return 0;
}