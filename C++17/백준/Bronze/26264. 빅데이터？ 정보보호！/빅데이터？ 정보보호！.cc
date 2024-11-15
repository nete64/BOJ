#include <iostream>
#include <string>
using namespace std;

int a[27];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    string s; cin >> s;
    for (auto c : s)
        a[c-'a']++;
    if (a[1] > a[18])
        cout << "bigdata?";
    else if (a[1] < a[18])
        cout << "security!";
    else
        cout << "bigdata? security!";
    return 0;
}