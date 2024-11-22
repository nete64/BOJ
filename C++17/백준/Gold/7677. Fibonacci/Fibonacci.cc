#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const ll MOD = 10000;

class Mat {
public:
    int sz = 2;
    ll dat[2][2];
    Mat() {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                dat[i][j] = 0;
    }
    Mat operator*(const Mat& r) const {
        Mat ret;
        for (int i = 0; i < sz; i++)
            for (int j = 0; j < sz; j++)
                for (int k = 0; k < sz; k++)
                    ret.dat[i][j] += dat[i][k] * r.dat[k][j] % MOD;
        return ret;
    }
};

Mat mpow(Mat m, ll power) {
    if (power == 0) {
        Mat identity;
        for (int i = 0; i < 2; i++)
            identity.dat[i][i] = 1;
        return identity;
    }
    Mat val = mpow(m, power / 2);
    if (power % 2 == 0)
        return val * val;
    else
        return val * val * m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        ll n; cin >> n;

        if (n == -1)
            break;
            
        Mat mat, res;
        mat.dat[0][0] = 1;
        mat.dat[0][1] = 1;
        mat.dat[1][0] = 1;
        mat.dat[1][1] = 0;
        
        res = mpow(mat, n);
        cout << res.dat[1][0] % MOD << "\n";
    }
    return 0;
}