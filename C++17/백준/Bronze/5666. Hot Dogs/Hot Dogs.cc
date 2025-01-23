#include <cstdio>

int main()
{
	int H, P;
	while (~scanf("%d%d", &H, &P)) {
		printf("%.2lf\n", H / (double)P);
	}
	return 0;
}