#include <iostream>

using namespace std;

// ���
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

// ���x
int gcd2(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// a * b = gcd * lcm
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n", gcd(a, b));
	printf("%d\n", lcm(a, b));
}