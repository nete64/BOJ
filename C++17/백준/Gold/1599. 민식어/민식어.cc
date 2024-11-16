#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct P {
	string o, m;
};
bool cmp(P& a, P& b)
{
	return a.m < b.m;
}
P p[52];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> p[i].o;

		string& s = p[i].o;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'k') p[i].m += 'c';
			else if (s[j] == 'n') {
				if (j + 1 < s.size() && s[j + 1] == 'g')
					p[i].m += 'o';
				else
					p[i].m += 'n';
			}
			else if (s[j] >= 'o')
				p[i].m += (char)(s[j] + 1);
			else
				p[i].m += s[j];
		}
	}
	sort(p, p + N, cmp);
	for (int i = 0; i < N; i++)
		cout << p[i].o << "\n";
	return 0;
}