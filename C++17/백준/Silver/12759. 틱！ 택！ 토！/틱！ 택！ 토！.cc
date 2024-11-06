#include <iostream>
using namespace std;

int arr[3][3];
bool check_row(int x, int p)
{
    for (int i = 0; i < 3; i++)
        if (arr[x][i] != p)
            return false;
    return true;
}
bool check_col(int y, int p)
{
    for (int i = 0; i < 3; i++)
        if (arr[i][y] != p)
            return false;
    return true;
}
bool check_dia1(int p)
{
    for (int i = 0; i < 3; i++)
        if (arr[i][i] != p)
            return false;
    return true;
}
bool check_dia2(int p)
{
    for (int i = 0; i < 3; i++)
        if (arr[i][2 - i] != p)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s; cin >> s;
    for (int i = 0; i < 9; i++, s++) {
        int x, y; cin >> x >> y;
        int p = (s % 2 == 1) ? 1 : 2;
        arr[x - 1][y - 1] = p;

        bool a = false, b = false, c = false, d = false;
        if (check_dia1(p) || check_dia2(p)) {
            cout << p;
            return 0;
        }

        for (int i = 0; i < 3; i++) {
            if (check_row(i, p) || check_col(i, p)) {
                cout << p;
                return 0;
            }
        }
    }
    cout << "0";
    return 0;
}