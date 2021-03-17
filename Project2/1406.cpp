#include <iostream>
#include <stack>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();

	stack<char> lstack, rstack;
	string result, temp;
	string str;
	cin >> str; // str에는 \n전까지 정보 저장. \n은 버퍼에 남아있음
	
	for (char ch : str)
	{
		lstack.push(ch);
	}

	int t;
	cin >> t;

	while (t--)
	{
		char ch;
		cin >> ch;

		if (ch == 'P')
		{
			char c;
			cin >> c;
			lstack.push(c);
		}
		else if (ch == 'L')
		{
			if (!lstack.empty())
			{
				char ltop = lstack.top();
				lstack.pop();
				rstack.push(ltop);
			}
		}
		else if (ch == 'D')
		{
			if (!rstack.empty())
			{
				char rtop = rstack.top();
				rstack.pop();
				lstack.push(rtop);
			}
		}
		else if (ch == 'B')
		{
			if(!lstack.empty())
				lstack.pop();
		}
	}

	while (!lstack.empty())
	{
		char c = lstack.top();
		rstack.push(c);
		lstack.pop();
	}

	while (!rstack.empty())
	{
		result += rstack.top();
		rstack.pop();
	}

	cout << result;
}