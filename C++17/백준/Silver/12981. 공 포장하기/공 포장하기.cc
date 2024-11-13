#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int R, G, B; cin >> R >> G >> B;
    ans += R / 3; ans += G / 3; ans += B / 3;
    R %= 3; G %= 3; B %= 3;
    
    while (R > 0 && G > 0 && B > 0) {
        ans++;
        R--; G--; B--;
    }
    while (R > 0 && G > 0) {
        ans++;
        R--; G--;
    }
    while (G > 0 && B > 0) {
        ans++;
        G--; B--;
    }
    while (B > 0 && R > 0) {
        ans++;
        B--; R--;
    }
    if (R > 0) ans++;
    if (G > 0) ans++;
    if (B > 0) ans++;
    cout << ans;
    return 0;
}