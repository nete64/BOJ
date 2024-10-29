#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    string s, t;
    getline(cin, s);
    getline(cin, t);

    int ans = 0;
    int i = s.find(t);
    while (i != string::npos) {
        ans++;
        i = s.find(t, i + t.size());
    }
    cout << ans;
	return 0;
}