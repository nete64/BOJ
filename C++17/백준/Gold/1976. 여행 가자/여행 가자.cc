#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 4000;
int arr[MAX][MAX];
int p[MAX];
int find(int n)
{
	if (p[n] < 0) return n;
	p[n] = find(p[n]);
	return p[n];
}

void merge(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a == b) return;
	p[a] += p[b];
	p[b] = a;
}

bool is_possible(int M)
{
	int t[MAX];
	for (int i = 0; i < M; i++) {
		cin >> t[i];
	}

	int target = find(t[0]);
	for (int i = 1; i < M; i++) {
		if (find(t[i]) != target) {
			return false;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	fill(p, p + MAX, -1);

	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1) {
				merge(i + 1, j + 1);
			}
		}
	}

	if (is_possible(M))
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}