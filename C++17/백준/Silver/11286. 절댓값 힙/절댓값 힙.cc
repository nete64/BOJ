#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;

struct P {
    int ab, n;
    P(int a, int b) : ab(a), n(b) {}
    bool operator<(const P& p) const {
        if (ab == p.ab) {
            return n > p.n;
        }
        return ab > p.ab;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    priority_queue<P> pq;

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        if (x == 0) {
            if (!pq.empty()) {
                cout << pq.top().n << '\n';
                pq.pop();
            }
            else {
                cout << "0\n";
            }
        }
        else {
            pq.push(P(abs(x), x));
        }
    }

    return 0;
}