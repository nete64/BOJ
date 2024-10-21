#include <iostream>
#include <string>
using namespace std;

int arr1[27], arr2[27];
bool check()
{
    for(int i = 0; i < 26; i++)
        if(arr1[i] != arr2[i])
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    while(N--) {
        fill(arr1, arr1 + 26, 0);
        fill(arr2, arr2 + 26, 0);

        string a, b; cin >> a >> b;
        for(auto& c : a)
            arr1[c-'a']++;
        for(auto& c : b)
            arr2[c-'a']++;
        
        if (check())
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}