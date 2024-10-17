#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mod[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while (N--) {
        int G; cin >> G;

        int mx = -123456789;
        vector<int> st;
        for (int i = 0; i < G; i++) {
            int X; cin >> X;
            st.push_back(X);
        }

        for (int i = 1; i <= 100001; i++) {
            bool b = true;
            vector<int> v;
            fill(mod, mod + 100002, 0);

            for (auto& e : st) {
                mod[e % i]++;
                if (mod[e % i] > 1) {
                    b = false;
                    break;
                }
            }

            if (b) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}