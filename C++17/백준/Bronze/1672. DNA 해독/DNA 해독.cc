#include <iostream>
#include <string>
using namespace std;

char tb[5][5][5]={
    {'A', 'C', 'A', 'G'},
    {'C', 'G', 'T', 'A'},
    {'A', 'T', 'C', 'G'},
    {'G', 'A', 'G', 'T'},
};
int cv(char c)
{
    if (c == 'A') return 0;
    else if (c == 'G') return 1;
    else if (c == 'C') return 2;
    else if (c == 'T') return 3;
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    string s; cin >> s;
    for (int i = s.size() - 1; i >= 1; i--) {
        int a = cv(s[i-1]);
        int b = cv(s[i]);
        s.pop_back();
        s.pop_back();
        s.push_back(tb[a][0][b]);
    }
    cout << s;
    return 0;
}