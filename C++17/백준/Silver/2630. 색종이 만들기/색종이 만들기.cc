#include <iostream>
using namespace std;

const int MAX = 150;
int P[MAX][MAX], N, white, blue;
bool is_perfect(int x1, int y1, int x2, int y2)
{
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            if (P[i][j] != P[x1][y1])
                return false;
        }
    }
    return true;
}

void divide(int x1, int y1, int x2, int y2)
{
    if (x1 >= x2 || y1 >= y2) {
        if (P[x1][y1] == 1) {
            blue++;
        } else {
            white++;
        }
        return;
    }

    if (is_perfect(x1, y1, x2, y2)) {
        if (P[x1][y1] == 1)
            blue++;
        else
            white++;
        return;
    } else {
        divide(x1, y1, (x1+x2)/2, (y1+y2)/2);
        divide((x1+x2)/2+1, y1, x2, (y1+y2)/2);
        divide(x1, (y1+y2)/2+1, (x1+x2)/2, y2);
        divide((x1+x2)/2+1, (y1+y2)/2+1, x2, y2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> P[i][j];
        }
    }

    divide(1, 1, N, N);
    cout << white << '\n' << blue;

    return 0;
}