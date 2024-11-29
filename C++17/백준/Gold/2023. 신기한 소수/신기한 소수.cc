#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
string tmp = "";
vector<string> v;
int isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
void bt(int depth, int x)
{
    if (depth == 0) {
        tmp = to_string(x);
    }

    if (depth == N - 1) {
        v.push_back(tmp);
        return;
    }

    for (int i = 1; i <= 9; i += 2) {
        tmp += to_string(i);
        if (isPrime(stoi(tmp)))
            bt(depth + 1, i);
        tmp.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    bt(0, 2);
    bt(0, 3);
    bt(0, 5);
    bt(0, 7);
    sort(v.begin(), v.end());
    for (auto e : v)
        cout << e << "\n";

    return 0;
}