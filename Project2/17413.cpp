#include <iostream>
#include <string>
#include <stack>

using namespace std;
void print(stack<char>& s) // 참조로 전달(변수 자체와 똑같이 취급되므로 참조에 대한 변경사항은 인수에도 적용됨)
{
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<char> s;

	string str;
	getline(cin, str);
	bool tag = false; // 문자열이 현재 태그를 처리하고 있는건지?

	for (char ch : str)
	{
		if (ch == '<')
		{
			print(s);
			tag = true;
			cout << ch;
		}
		else if (ch == '>')
		{
			tag = false;
			cout << ch;
		}
		else if (tag)
		{
			cout << ch;
		}
		else
		{
			if (ch == ' ')
			{
				print(s);
				cout << ch;
			}
			else
			{
				s.push(ch);
			}
		}
	}

	print(s);
	cout << '\n';
	return 0;
}