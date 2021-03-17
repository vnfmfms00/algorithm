#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, A, B;

	cin >> t;

	while (t--)
	{
		cin >> A >> B;
		cout << A + B << '\n';
	}
}