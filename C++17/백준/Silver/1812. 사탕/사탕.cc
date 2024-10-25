#include <iostream>
using namespace std;

int arr[1002], S;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        S += arr[i];
    }
    S /= 2;
    for (int i = 0; i < N; i++) {
        int ps = 0;
        int a = i + 1;
        while (a % N != i) {
            ps += arr[a % N];
            a += 2;
        }
        cout << S - ps << "\n";
    }
    return 0;
}