#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<pair<int, int> > dq;

    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        int X; cin >> X;
        dq.push_back({X, i});
    }

    while (!dq.empty()) {
        int k = dq.front().first;
        cout << dq.front().second << " ";
        dq.pop_front();

        while (!dq.empty() && k > 1) {
            dq.push_back(dq.front());
            dq.pop_front();
            k--;
        }
        while (!dq.empty() && k < 0) {
            dq.push_front(dq.back());
            dq.pop_back();
            k++;
        }
    }
    return 0;
}