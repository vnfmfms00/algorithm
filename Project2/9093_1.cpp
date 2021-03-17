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
		cin.getline(str, 1000, ','); // str�� \n(����Ű) ��� �ȵ�. ��Ʈ������ �����. ���๮�� ���ö����� �Է¹���
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

		// ���� ������ ���� �ܾ� ���
		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}

		cout << '\n';
	}
}