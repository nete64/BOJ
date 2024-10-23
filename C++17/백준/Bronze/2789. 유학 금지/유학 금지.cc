#include <iostream>
#include <string>
using namespace std;

char tb[] = {'C', 'A', 'M', 'B', 'R', 'I', 'D', 'G', 'E'};
bool check(char c)
{
    for(auto k : tb)
        if(c == k)
            return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    string ans = "";
    for (auto c : s)
        if (!check(c))
            ans += c;
    cout << ans;
    return 0;
}