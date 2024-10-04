#include <iostream>
#include <string>
using namespace std;

int arr[27];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++)
        arr[s[i] - 'A'] = 1;
    
    if (arr[12] + arr[14] + arr[1] + arr[8] + arr[18] == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}