#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	vector<int> a(t); // 기본값(0) 으로 초기화 된 t개의 원소를 가지는 vector a 생성
	vector<int> nge(t);

	stack<int> s;

	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	s.push(0);

	for (int i = 1; i < t; i++)
	{
		if (s.empty())
		{
			s.push(i);
		}
		while (!s.empty() && a[s.top()] < a[i])
		{
			nge[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}

	while (!s.empty())
	{
		nge[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < t; i++)
	{
		if (i != t - 1)
			cout << nge[i] << ' ';
		else
			cout << nge[i] << '\n';
	}
	return 0;
}