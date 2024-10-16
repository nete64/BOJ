#include <cstdio>

int main()
{
	int T; scanf("%d", &T);
	while (T--) {
		float a, b;
		scanf("%f%f", &a, &b);
		printf("The height of the triangle is %.2f units\n", a / (b * 0.5));
	}
	return 0;
}