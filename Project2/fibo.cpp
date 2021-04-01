#include <iostream>

using namespace std;

// 시간 복잡도 : 문제의 개수 x 문제 1개 푸는데 걸리는 시간 : O(N)
int memo[100]; // memo[i] = 0 : 답을 구하지 않은 상태
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	else
	{
		// 이전에 구했다면 바로 리턴(memoization)
		if (memo[n] > 0)
			return memo[n];

		memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
		return memo[n];
	}
}