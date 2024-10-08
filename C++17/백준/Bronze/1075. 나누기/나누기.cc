#include <cstdio>
using namespace std;

int main()
{
	int N, F;
	scanf("%d%d", &N, &F);
	int a = N / 100 * 100;
	int b = a + 99;
	for (int i = a; i <= b; i++) {
		if (i % F == 0) {
			printf("%02d", i % 100);
			break;
		}
	}
	return 0;
}