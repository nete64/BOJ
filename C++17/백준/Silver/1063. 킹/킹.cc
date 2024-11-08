#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int dx[] = {1,1,1,0,-1,-1,-1,0};
int dy[] = {-1,0,1,1,1,0,-1,-1};
int kx, ky, sx, sy;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<string, int> um;
    um["R"] = 3; um["L"] = 7; um["B"] = 5; um["T"] = 1;
    um["RT"] = 2; um["LT"] = 0; um["RB"] = 4; um["LB"] = 6;

    string ks, ss;
    int N;
    cin >> ks >> ss >> N;
    
    kx = ks[1] - '0'; ky = ks[0] - 'A' + 1;
    sx = ss[1] - '0'; sy = ss[0] - 'A' + 1;

    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        int dir = um[s];

        int knx = kx + dx[dir];
        int kny = ky + dy[dir];

        if (knx <= 0 || kny <= 0 || knx > 8 || kny > 8)
            continue;

        if (knx == sx && kny == sy) {
            int snx = sx + dx[dir];
            int sny = sy + dy[dir];
            if (snx <= 0 || sny <= 0 || snx > 8 || sny > 8)
                continue;
            
            sx = snx; sy = sny;
        }
        kx = knx; ky = kny;
    }
    cout << (char)(ky + 'A' - 1) << kx << "\n";
    cout << (char)(sy + 'A' - 1) << sx << "\n";
    return 0;
}