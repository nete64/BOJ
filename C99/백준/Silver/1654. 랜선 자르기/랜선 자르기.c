#include <stdio.h>

int len[10001];
int main()
{
	int K, N;
	scanf("%d%d", &K, &N);
	for (int i = 0; i < K; i++) {
		scanf("%d", &len[i]);
	}

	long long l = 0, r = 0x7fffffff, res = 0;
	while (l <= r) {
		long long mid = (l + r) / 2;
		long long sum = 0;
		for (int i = 0; i < K; i++)
			sum += len[i] / mid;
		if (sum >= N) {
			l = mid + 1;
			res = res > mid ? res : mid;
		}
		else r = mid - 1;
	}
	printf("%lld", res);
	return 0;
}