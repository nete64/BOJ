#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int num = 0;
    for (auto c : s) {
        if (islower(c)) num += c - 'a' + 1;
        else if (isupper(c)) num += c - 'A' + 27;
    }
    
    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            cout << "It is not a prime word.";
            return 0;
        }
    }
    cout << "It is a prime word.";
    return 0;
}