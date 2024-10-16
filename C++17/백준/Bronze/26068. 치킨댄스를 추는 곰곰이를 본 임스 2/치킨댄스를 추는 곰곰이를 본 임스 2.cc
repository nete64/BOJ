#include <cstdio>

int ans;
int main()
{
	int N; scanf("%d", &N);
	while (N--) {
		char a,b,c;
		int k;
		scanf("%c%c%c", &a, &b, &c);
		scanf("%d", &k);
		if (k <= 90)
			ans++;
	}
	printf("%d", ans);
	return 0;
}