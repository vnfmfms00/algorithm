#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int num;
	cin >> num;

	int count = 0;
	for (int i = 5; i <= num; i = i * 5)
	{
		count = count + num / i;
	}

	cout << count << '\n';
	return 0;
}