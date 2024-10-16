#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	float s;
	scanf("%f", &s);
	printf("%.10f", 2 * 3.141592 * sqrt(s / 3.141592));
	return 0;
}