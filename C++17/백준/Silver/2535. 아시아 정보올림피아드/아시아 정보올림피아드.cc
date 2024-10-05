#include <iostream>
#include <algorithm>
using namespace std;

struct S {
	int cn, sn, score;
};

bool cmp(S& a, S& b)
{
	return a.score > b.score;
}

S s[105];
int cnt[105];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> s[i].cn >> s[i].sn >> s[i].score;

	sort(s, s + N, cmp);

	int total = 0;
	for (int i = 0; i < N; i++) {
		if (cnt[s[i].cn] < 2) {
			cnt[s[i].cn]++;
			total++;
			cout << s[i].cn << " " << s[i].sn << "\n";
		}
		if (total == 3)
			break;
	}
	return 0;
}