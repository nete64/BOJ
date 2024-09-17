#include <stdio.h>
#include <string.h>

int S, M, x;
char cmd[10];
int main()
{
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%s", cmd);
		if (!strcmp("add", cmd)) {
			scanf("%d", &x);
			S |= 1 << x;
		}
		else if (!strcmp("remove", cmd)) {
			scanf("%d", &x);
			S &= ~(1 << x);
		}
		else if (!strcmp("check", cmd)) {
			scanf("%d", &x);
			if (S & (1 << x)) printf("1\n");
			else printf("0\n");
		}
		else if (!strcmp("toggle", cmd)) {
			scanf("%d", &x);
			S ^= (1 << x);
		}
		else if (!strcmp("all", cmd)) {
			S |= (1 << 21) - 1;
		}
		else if (!strcmp("empty", cmd)) {
			S = 0;
		}
	}
	return 0;
}