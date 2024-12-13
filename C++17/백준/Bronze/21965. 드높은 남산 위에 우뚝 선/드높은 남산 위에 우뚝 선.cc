#include <iostream>
using namespace std;

int A[100002];
bool yama1(int x, int y)
{
    for (int i = x; i < y; i++)
        if (A[i] >= A[i+1])
            return false;
    return true;
}
bool yama2(int x, int y)
{
    for (int i = x; i < y; i++)
        if (A[i] <= A[i+1])
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    int mx = -1, mxi = 0;
    for (int i = 0; i < N; i++) {
        if (mx < A[i]) {
            mx = A[i];
            mxi = i;
        }
    }
    if (yama1(0, mxi) && yama2(mxi, N))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}