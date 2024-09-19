#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    string S;
    cin >> N >> M >> S;

    string tmp = "";
    for (int i = 1; i <= N; i++) {
        tmp += "IO";
    }
    tmp += "I";

    int index = 0;
    int ans = 0;
    while (true) {
        index = S.find(tmp, index);

        if (index == string::npos)
            break;

        index++;
        ans++;
    }

    cout << ans;

    return 0;
}