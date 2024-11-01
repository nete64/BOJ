#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

struct P {
    int n, i;
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    deque<P> dq;
    int N, L; cin >> N >> L;
    
    for (int i = 0; i < N; i++) {
        int k; cin >> k;
        
        while (!dq.empty() && dq.back().n >= k) {
            if (dq.back().n >= k)
                dq.pop_back();
            else
                break;
        }
        dq.push_back({k, i});

        if (dq.front().i <= i - L) {
            dq.pop_front();
        }
        cout << dq.front().n << " ";
    }
	return 0;
}