#include <iostream>
using namespace std;

int arr[30000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, A, D; cin >> N >> A >> D;
    int s = -1;
    int ans = 0, next = A;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (s == -1 && arr[i] == A) {
            s = i;
            ans = 1;
            next += D;
        }
    }

    for (int i = s; i < N; i++) {
        if (arr[i] == next) {
            ans++;
            next += D;
        }
    }
    cout << ans;
    return 0;
}