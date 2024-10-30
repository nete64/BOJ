#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    while (true) {
        int N; cin >> N;

        if (N == 0)
            break;
        
        int prev = 0;
        for (int i = 0; i < N; i++) {
            int X; cin >> X;
            if (prev != X)
                cout << X << " ";
            prev = X;
        }
        cout << "$\n";
    }
	return 0;
}