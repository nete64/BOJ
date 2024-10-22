#include <iostream>
#include <string>
using namespace std;

int tb[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    string s; cin >> s;
    for (auto& c : s) {
        ans += tb[c-'A'] + 1;
    }
    cout << ans;
    return 0;
}