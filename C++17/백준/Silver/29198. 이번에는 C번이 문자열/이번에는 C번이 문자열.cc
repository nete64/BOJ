#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string S[303];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N, M, K; cin >> N >> M >> K;
	
	for (int i = 0; i < N; i++) {
		cin >> S[i];
		sort(S[i].begin(), S[i].end());
	}

	sort(S, S + N);

	string ans = "";
	for (int i = 0; i < K; i++)
		ans += S[i];

	sort(ans.begin(), ans.end());
	cout << ans;
	return 0;
}