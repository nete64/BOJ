#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    getline(cin, s);

    int H = 0, G = 0;
    for (auto c : s) {
        if (c == 'H' || c == 'A' || c == 'P' || c == 'Y')
            H++;
        if (c == 'S' || c == 'A' || c == 'D')
            G++;
    }
    cout.setf(ios::fixed);
	cout << setprecision(2);
    if (H == 0 && G == 0)
        cout << "50.00";
    else {
        double d = (double)H / (H + G) * 100;
        cout << round(d * 100) / 100;
    }
    return 0;
}