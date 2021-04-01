#include <iostream>

using namespace std;

// top down (재귀)
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

// top down과 bottom up 중 마음에 드는거로 공부
// 파이썬 사용시 bottom up으로. (stackoverflow발생이 빈번하기때문)
// bottom up (반복) 
// 시간 복잡도: O(N)
int d[100];
int fibonacci2(int n)
{
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	return d[n];
}