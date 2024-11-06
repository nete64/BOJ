#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = N; i >= 0; i--) {
        if (i >= 1) {
            cout << i << " bottle";
            if (i >= 2)
                cout << "s";
            cout << " of beer on the wall, " << i << " bottle";
            if (i >= 2)
                cout << "s";
            cout << " of beer.\n";
            cout << "Take one down and pass it around, ";
            if (i - 1 == 1)
                cout << i - 1 << " bottle ";
            else if (i - 1 >= 2)
                cout << i - 1 << " bottles ";
            else
                cout << "no more bottles ";
            cout << "of beer on the wall.\n\n";
        } else {
            cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
            cout << "Go to the store and buy some more, " << N << " bottle";
            if (N >= 2)
                cout << "s";
            cout << " of beer on the wall.";
        }
    }
    return 0;
}