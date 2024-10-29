#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;

int N;
vector<ll> v;
void bt(string s)
{
    if (s.size() > 0) {
        s += '\0';
        v.push_back(stoll(s));
        s.pop_back();
    }
    
    for (int i = 0; i <= 9; i++) {
        if (s.size() == 0 || s.back() - '0' > i)
            bt(s + (char)(i + '0'));
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	bt("");
    sort(v.begin(), v.end());

    cin >> N;
    if (N >= v.size())
        cout << "-1";
    else
        cout << v[N];
	return 0;
}