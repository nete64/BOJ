#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int dat, idx;
};

bool operator <(const Node &a, const Node &b) {
    if (a.dat == b.dat)
        return a.idx < b.idx;
    return a.dat < b.dat;
}
class SegmentTree {
    public:
    Node node[300000];
    int siz = 1;

    void init(int N)
    {
        siz = 1;
        while (siz < N) siz *= 2;
        for (int i = 1; i < siz * 2; i++) {
            node[i].dat = node[i].idx = 1e9;
        }
    }

    void update(int pos, int x)
    {
        int k = pos;
        pos = pos + siz - 1;
        node[pos].dat = x;
        node[pos].idx = k;
        while (pos >= 2) {
            pos /= 2;
            node[pos] = min(node[pos * 2], node[pos * 2 + 1]);
        }
    }

    Node query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return {1000000000, 1000000000};
        if (l <= a && b <= r) return node[u];
        int m = (a + b) / 2;
        return min(query(l, r, a, m, u * 2), query(l, r, m, b, u * 2 + 1));
    }
};

SegmentTree st;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    st.init(N);
    for (int i = 1; i <= N; i++) {
        int X; cin >> X;
        st.update(i, X);
    }

    int M; cin >> M;
    for (int i = 0; i < M; i++) {
        int a; cin >> a;
        if (a == 1) {
            int b, c; cin >> b >> c;
            st.update(b, c);
        } else
            cout << st.query(1, N+1, 1, st.siz + 1, 1).idx << "\n";
    }
    return 0;
}