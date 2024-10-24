#include <iostream>
#include <algorithm>
using namespace std;

int arr[102];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (arr[j] % i > arr[j + 1] % i)
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int i = 0; i < N; i++)
        cout << arr[i] << "\n";
    return 0;
}