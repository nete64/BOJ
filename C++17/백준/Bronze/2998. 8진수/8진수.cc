#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string tmp; cin >> tmp;
    string s = "";
    unordered_map<string, int> um;
    um["000"] = 0;
    um["001"] = 1;
    um["010"] = 2;
    um["011"] = 3;
    um["100"] = 4;
    um["101"] = 5;
    um["110"] = 6;
    um["111"] = 7;

    for (int i = tmp.size(); i % 3 != 0; i++)
        s += "0";

    for (auto& c : tmp)
        s += c;

    for (int i = 0; i < s.size(); i += 3) {
        string ss = s.substr(i, 3);
        cout << um[ss];
    }
    return 0;
}