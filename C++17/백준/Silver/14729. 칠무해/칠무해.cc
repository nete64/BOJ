#include <cstdio>
#include <algorithm>
using namespace std;

float arr[10000002];
int main()
{
	int N; scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%f", &arr[i]);

	sort(arr, arr + N);

	for (int i = 0; i < 7; i++)
		printf("%.3f\n", arr[i]);

	return 0;
}