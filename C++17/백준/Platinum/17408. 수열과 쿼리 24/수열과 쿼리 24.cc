#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int mx_first, mx_second;
};
class SegmentTree {
    public:
    Node node[300000];
    int dat[300000];
    int siz = 1;

    void change_max_node(Node& l, Node& r, Node& u)
    {
        if (l.mx_first >= r.mx_first) {
            u.mx_first = l.mx_first;
            if (l.mx_second >= r.mx_first)
                u.mx_second = l.mx_second;
            else
                u.mx_second = r.mx_first;
        } else {
            u.mx_first = r.mx_first;
            if (l.mx_first >= r.mx_second)
                u.mx_second = l.mx_first;
            else
                u.mx_second = r.mx_second;
        }
    }
    void init(int N)
    {
        siz = 1;
        while (siz < N) siz *= 2;
        for (int i = 1; i < siz * 2; i++) {
            dat[i] = 0;
            node[i].mx_first = node[i].mx_second = 0;
        }
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        dat[pos] = x;
        node[pos].mx_first = x;
        node[pos].mx_second = 0;
        while (pos >= 2) {
            pos /= 2;
            Node& l = node[pos * 2];
            Node& r = node[pos * 2 + 1];
            change_max_node(l, r, node[pos]);
        }
    }

    Node query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return {0, 0};
        if (l <= a && b <= r) return node[u];
        int m = (a + b) / 2;
        Node p = query(l, r, a, m, u * 2);
        Node q = query(l, r, m, b, u * 2 + 1);

        Node ret;
        change_max_node(p, q, ret);
        return ret;
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
        int a, b, c; cin >> a >> b >> c;
        if (a == 1) {
            st.update(b, c);
        } else {
            Node d = st.query(b, c+1, 1, st.siz + 1, 1);
            cout << d.mx_first + d.mx_second << "\n";
        }
    }
    return 0;
}