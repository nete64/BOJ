#include <stdio.h>

int main()
{
	int a, b, c, d = 1, e;
	scanf("%d%d%d", &a, &b, &c);
	e = b;
	while (e > 0) {
		d *= 10;
		e /= 10;
	}
	printf("%d\n%d", a + b - c, a * d + b - c);
	return 0;
}