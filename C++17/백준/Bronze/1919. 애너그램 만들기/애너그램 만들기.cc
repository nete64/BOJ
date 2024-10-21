#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int arr1[27], arr2[27];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b; cin >> a >> b;
    for (auto& c : a)
        arr1[c-'a']++;
    for (auto& c : b)
        arr2[c-'a']++;
    int ans = 0;
    for (int i = 0; i < 26; i++)
        ans += abs(arr1[i]-arr2[i]);
    cout << ans;
    return 0;
}