#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int T; cin >> T;
    while (T--) {
        int c, v; cin >> c >> v;
        cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }
	return 0;
}