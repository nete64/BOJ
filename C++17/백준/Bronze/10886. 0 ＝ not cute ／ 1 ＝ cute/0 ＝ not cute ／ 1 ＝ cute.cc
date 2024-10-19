#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int arr[2];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int N; cin >> N;
    while (N--) {
        int x; cin >> x;
        arr[x]++;
    }
    if (arr[0] < arr[1])
        cout << "Junhee is cute!";
    else
        cout << "Junhee is not cute!";
	return 0;
}