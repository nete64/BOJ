#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int arr[1<<10];
vector<int> v[10];
void f(int depth, int a, int b)
{
    if (a >= b) return;

    int mid = (a + b) / 2;
    v[depth].push_back(arr[mid]);

    f(depth + 1, a, mid);
    f(depth + 1, mid + 1, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int K; cin >> K;
    int m = pow(2, K) - 1;
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    f(0, 0, m);
    for (int i = 0; i < K; i++) {
        for (auto e : v[i])
            cout << e << " ";
        cout << "\n";
    }
    return 0;
}