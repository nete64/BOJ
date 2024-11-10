#include <iostream>
#include <algorithm>
using namespace std;

int arr[11], ans[11];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i] == 0 && ans[j] == 0) {
                ans[j] = i + 1;
                break;
            }
            if (ans[j] == 0 && arr[i] > 0)
                arr[i]--;
        }
    }
    
    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
    return 0;
}