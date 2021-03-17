#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	int a, b;
	//char s[100];

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d,%d", &a, &b);
		printf("%d\n", a + b);

		//char* ptr = strtok(s, ",");
		
		/*char* s1 = strtok(s, ",");
		int a = atoi(s1);
		char* s2 = strtok(NULL, ",");
		int b = atoi(s2);
		printf("%d\n", a + b);*/
	}
}