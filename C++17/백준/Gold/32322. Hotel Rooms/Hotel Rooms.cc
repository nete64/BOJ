#include <iostream>
#include <cmath>
#include <algorithm>
using ll = long long;
using namespace std;

class SegmentTree {
    public:
    ll dat[3000000], siz = 1;

    void init(int N)
    {
        siz = 1;
        while (siz < N) siz *= 2;
        for (int i = 1; i < siz * 2; i++) dat[i] = 0;
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        dat[pos] = x;
        while (pos >= 2) {
            pos /= 2;
            dat[pos] = dat[pos * 2] + dat[pos * 2 + 1];
        }
    }

    ll query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return 0;
        if (l <= a && b <= r) return dat[u];
        ll m = (a + b) / 2;
        ll AnswerL = query(l, r, a, m, u * 2);
        ll AnswerR = query(l, r, m, b, u * 2 + 1);
        return AnswerL + AnswerR;
    }
};

SegmentTree st;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, Q; cin >> N >> Q;

    st.init(N);
    for (int i = 1; i <= Q; i++) {
        char c; cin >> c;

        if (c == 'R') {
            int X; cin >> X;
            st.update(X, 1);
        }
        else {
            int A, B; cin >> A >> B;
            if (A > B) swap(A, B);
            cout << (B - A + 1) - st.query(A, B + 1, 1, st.siz + 1, 1) << "\n";
        }
    }
    return 0;
}