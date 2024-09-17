#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int count = 0;
    int M = 666;

    while (count < N) {
        string s = std::to_string(M);
        if (s.find("666") != -1)
            count++;
        if (count == N) {
            cout << M;
            return 0;
        }
        M++;
    }
    return 0;
}