#include <cstdio>
using namespace std;

int main()
{
	int s = 0;
	for (int i = 0; i < 5; i++) {
		int n; scanf("%d", &n);
		if (n < 40)
			s += 40;
		else
			s += n;
	}
	printf("%d", s / 5);
	return 0;
}