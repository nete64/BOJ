#include <stdio.h>

int main()
{
	int m = 0, k = 0;
	for (int i = 0; i < 9; i++) {
		int n;
		scanf("%d", &n);
		if (m < n) {
			m = n;
			k = i + 1;
		}
	}
	printf("%d\n%d", m, k);
	return 0;
}