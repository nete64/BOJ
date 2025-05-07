#include <iostream>
#include <algorithm>
using namespace std;

struct C {
    int i,a,b,c;
};
bool cmp(C& A, C& B)
{
    if (A.a == B.a && A.b == B.b)
        return A.c > B.c;
    else if (A.a == B.a)
        return A.b > B.b;
    return A.a > B.a;
}
C arr[1002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N,K; cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> arr[i].i >> arr[i].a >> arr[i].b >> arr[i].c;

    sort(arr, arr + N, cmp);
    int r = 1;
    int x = arr[0].a, y = arr[0].b, z = arr[0].c;
    for (int i = 0; i < N; i++) {
        if (!(arr[i].a == x && arr[i].b == y && arr[i].c == z)) {
            r = i + 1;
            x = arr[i].a;
            y = arr[i].b;
            z = arr[i].c;
        }
        if (arr[i].i == K)
            break;
    }
    cout << r;
    return 0;
}