#include <stdio.h>

int main()
{
	int T, ans = 0;
	scanf("%d", &T);
	while (T--) {
		int k;
		scanf("%1d", &k);
		ans += k;
	}
	printf("%d", ans);
	return 0;
}