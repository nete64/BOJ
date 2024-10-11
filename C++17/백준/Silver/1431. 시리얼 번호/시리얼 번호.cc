#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s[52];
bool cmp(string &a, string &b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    else if (a.size() == b.size()) {
        int suma = 0;
        int sumb = 0;
        for (int i = 0; i < a.size(); i++) {
            if (isdigit(a[i]))
                suma += a[i] - '0';
            if (isdigit(b[i]))
                sumb += b[i] - '0';
        }
        if (suma != sumb)
            return suma < sumb;
    }
    return a < b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> s[i];
    
    sort(s, s + N, cmp);
    for (int i = 0; i < N; i++)
        cout << s[i] << "\n";

	return 0;
}