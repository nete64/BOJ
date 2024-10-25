#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[10];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string N; cin >> N;
    int dgsum = 0;
    for (int i = 0; i < N.size(); i++) {
        arr[N[i]-'0']++;
        dgsum += N[i]-'0';
    }
    if (arr[0] == 0 || dgsum % 3 != 0)
        cout << "-1";
    else {
        for (int i = 9; i >= 0; i--)
            while (arr[i]-- > 0) {
                cout << i;
            }
    }
    return 0;
}