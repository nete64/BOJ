#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

stack<int> s[3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    int N; cin >> N;
    for (int i = N; i > 0; i--)
        s[0].push(i);

    while (s[2].size() < N) {
        int a, b; cin >> a >> b;

        for (int i = 0; i < b; i++) {
            if (a == 1) {
                if (s[0].empty()) break;
                s[1].push(s[0].top());
                s[0].pop();
            } else if (a == 2) {
                if (s[1].empty()) break;
                s[2].push(s[1].top());
                s[1].pop();
            }
        }
    }

    while(!s[2].empty()) {
        cout << s[2].top() << "\n";
        s[2].pop();
    }
	return 0;
}