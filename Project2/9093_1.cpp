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
		cin.getline(str, 1000, ','); // str에 \n(엔터키) 기록 안됨. 스트림에서 사라짐. 개행문자 나올때까지 입력받음
		int i = 0;
		stack<char> s;
		while (str[i] != '\0')
		{
			if (str[i] != ' ')
			{
				s.push(str[i]);
			}
			else
			{
				while (!s.empty())
				{
					cout << s.top();
					s.pop();
				}
				cout << str[i];
			}
			i++;
		}

		// 문장 끝나기 직전 단어 출력
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}

		cout << '\n';
	}
}