#include <iostream>
#include <algorithm>
using namespace std;

class SegmentTree {
    public:
    int odd[300000], even[300000];
    int siz = 1;

    void init(int N)
    {
        siz = 1;
        while (siz < N) siz *= 2;
        for (int i = 1; i < siz * 2; i++) {
            odd[i] = 0;
            even[i] = 0;
        }
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        if (x % 2 == 0) {
            odd[pos] = 0;
            even[pos] = 1;

            while (pos >= 2) {
                pos /= 2;
                even[pos] = even[pos * 2] + even[pos * 2 + 1];
                odd[pos] = odd[pos * 2] + odd[pos * 2 + 1];
            }
        } else {
            odd[pos] = 1;
            even[pos] = 0;

            while (pos >= 2) {
                pos /= 2;
                even[pos] = even[pos * 2] + even[pos * 2 + 1];
                odd[pos] = odd[pos * 2] + odd[pos * 2 + 1];
            }
        }
    }

    int query_odd(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return 0;
        if (l <= a && b <= r) return odd[u];
        int m = (a + b) / 2;
        int AnswerL = query_odd(l, r, a, m, u * 2);
        int AnswerR = query_odd(l, r, m, b, u * 2 + 1);
        return AnswerL + AnswerR;
    }

    int query_even(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return 0;
        if (l <= a && b <= r) return even[u];
        int m = (a + b) / 2;
        int AnswerL = query_even(l, r, a, m, u * 2);
        int AnswerR = query_even(l, r, m, b, u * 2 + 1);
        return AnswerL + AnswerR;
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
        if (a == 1)
            st.update(b, c);
        else if (a == 2)
            cout << st.query_even(b, c+1, 1, st.siz + 1, 1) << "\n";
        else if (a == 3)
            cout << st.query_odd(b, c+1, 1, st.siz + 1, 1) << "\n";
    }
    return 0;
}