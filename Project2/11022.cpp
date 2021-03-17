#include <iostream>

using namespace std;

int main()
{
	int t, num;
	int a, b;
	scanf("%d", &t);
	num = t;

	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", num - t, a, b, a + b);
	}
}