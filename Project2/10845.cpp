#include <iostream>
#include <string>

using namespace std;

struct Queue {
	int data[10000];
	int begin, end;
	Queue() {
		begin = 0;
		end = 0;
	}

	bool empty()
	{
		if (begin == end)
			return true;
		else
			return false;
	}

	int size()
	{
		return (end - begin);
	}

	void push(int num)
	{
		data[end] = num;
		end += 1;
	}

	int pop()
	{
		if (empty())
			return -1;
		else
		{
			int temp = data[begin];
			data[begin] = 0;
			begin += 1;
			return temp;
		}
	}

	int front()
	{
		if (empty())
			return -1;
		else
			return data[begin];
	}

	int back()
	{
		if (empty())
			return -1;
		else
			return data[end - 1];
	}
};


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	Queue q;
	int t;
	cin >> t;
	while (t--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push") // c++ 에서 string 내용 비교시 사용가능
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if(cmd == "pop")
		{
			cout << q.pop() << '\n';
		}
		else if (cmd == "size")
		{
			cout << q.size() << '\n';
		}
		else if (cmd == "empty")
		{
			if (q.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (cmd == "front")
		{
			cout << q.front() << '\n';
		}
		else if (cmd == "back")
		{
			cout << q.back() << '\n';
		}
	}
}