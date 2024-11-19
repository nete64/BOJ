#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<string> us;
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        if ((s.find("Cheese", s.size() - 6)) != string::npos)
            us.insert(s);
    }
    if (us.size() >= 4)
        cout << "yummy";
    else
        cout << "sad";
    return 0;
}