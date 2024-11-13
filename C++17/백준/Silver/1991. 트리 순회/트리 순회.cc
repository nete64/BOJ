#include <iostream>
#include <vector>
using namespace std;

vector<char> v[28];
void pre(char x)
{
    cout << x;
    if (v[x-'A'][0] != '.') pre(v[x-'A'][0]);
    if (v[x-'A'][1] != '.') pre(v[x-'A'][1]);
}
void in(char x)
{
    if (v[x-'A'][0] != '.') in(v[x-'A'][0]);
    cout << x;
    if (v[x-'A'][1] != '.') in(v[x-'A'][1]);
}
void post(char x)
{
    if (v[x-'A'][0] != '.') post(v[x-'A'][0]);
    if (v[x-'A'][1] != '.') post(v[x-'A'][1]);
    cout << x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        char a, b, c; cin >> a >> b >> c;
        v[a - 'A'].push_back(b);
        v[a - 'A'].push_back(c);
    }
    pre('A');
    cout << '\n';
    in('A');
    cout << '\n';
    post('A');
    return 0;
}