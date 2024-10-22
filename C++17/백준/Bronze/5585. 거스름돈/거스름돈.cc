#include <iostream>
using namespace std;

int tb[]={500,100,50,10,5,1};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    N = 1000 - N;

    int ans = 0;
    for (int i = 0; i < 6; i++) {
        ans += N / tb[i];
        N %= tb[i];
    }
    cout << ans;
    return 0;
}