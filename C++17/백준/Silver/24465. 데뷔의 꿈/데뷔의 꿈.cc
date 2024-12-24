#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool k[13];
struct P {
	int m, d;
};
bool cmp(P& a, P& b)
{
	if (a.m == b.m)
		return a.d < b.d;
	return a.m < b.m;
}
int c(int m, int d)
{
	if ((m == 1 && d >= 20) || (m == 2 && d <= 18))
		return 0;
	if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
		return 1;
	if ((m == 3 && d >= 21) || (m == 4 && d <= 19))
		return 2;
	if ((m == 4 && d >= 20) || (m == 5 && d <= 20))
		return 3;
	if ((m == 5 && d >= 21) || (m == 6 && d <= 21))
		return 4;
	if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
		return 5;
	if ((m == 7 && d >= 23) || (m == 8 && d <= 22))
		return 6;
	if ((m == 8 && d >= 23) || (m == 9 && d <= 22))
		return 7;
	if ((m == 9 && d >= 23) || (m == 10 && d <= 22))
		return 8;
	if ((m == 10 && d >= 23) || (m == 11 && d <= 22))
		return 9;
	if ((m == 11 && d >= 23) || (m == 12 && d <= 21))
		return 10;
	if ((m == 12 && d >= 22) || (m == 1 && d <= 19))
		return 11;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 7; i++) {
		int A, B; cin >> A >> B;
		k[c(A, B)] = true;
	}
	
	vector<P> v;

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int A, B; cin >> A >> B;
		if (!k[c(A, B)])
			v.push_back({ A,B });
	}
	sort(v.begin(), v.end(), cmp);
	if (v.size() == 0) {
		cout << "ALL FAILED";
		return 0;
	}

	for (auto& e : v) {
		cout << e.m << " " << e.d << "\n";
	}
	return 0;
}