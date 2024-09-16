#include <stdio.h>

int main()
{
	int T, m = -1111111, n = 1111111;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int k;
		scanf("%d", &k);
		if (m < k) m = k;
		if (n > k) n = k;
	}
	printf("%d %d", n, m);
	return 0;
}