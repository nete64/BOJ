#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<string, int> um;
    int N, P; cin >> N >> P;
    int W, L, G; cin >> W >> L >> G;
    for (int i = 0; i < P; i++) {
        string a, b; cin >> a >> b;
        if (b[0] == 'W')
            um[a] = W;
        else
            um[a] = -L;
    }
    
    bool isIron = true;
    int score = 0;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        if (um.count(s) == 0)
            score -= L;
        else
            score += um[s];
        if (score < 0) score = 0;
        if (score >= G) {
            isIron = false;
            break;
        }
    }
    if (isIron)
        cout << "I AM IRONMAN!!";
    else
        cout << "I AM NOT IRONMAN!!";
    return 0;
}