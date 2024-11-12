#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int A[9], B[9], N, ans;
bool visited[9];
vector<int> v;
void bt(int depth)
{
    if (depth == N) {
        int sum = 0;
        for (int i = 0; i < N - 1; i++)
            sum += abs(B[i] - B[i + 1]);
        ans = max(ans, sum);
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            B[depth] = A[i];
            bt(depth + 1);
            visited[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    bt(0);
    cout << ans;
    return 0;
}