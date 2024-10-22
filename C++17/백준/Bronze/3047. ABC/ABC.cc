#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    
    string s; cin >> s;
    for(auto& c : s)
        cout << arr[c-'A'] << " ";
    
    return 0;
}