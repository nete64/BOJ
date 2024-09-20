#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int N, M;
int arr[10], ans[10];
bool visited[10];
set<string> st;
string tmp;
void bt(int depth, int curr, string s)
{
	if (depth == M) {
		if (st.count(s) == 0) {
			cout << s << '\n';
			st.insert(s);
		}
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			int len = to_string(arr[i]).length();
			s += (to_string(arr[i]) + " ");
			visited[i] = true;

			ans[depth] = arr[i];
			bt(depth + 1, i + 1, s);
			visited[i] = false;

			for (int j = 0; j <= len; j++)
				s.pop_back();
		}
	}
}

int main()
{
	cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin>> arr[i];
    sort(arr, arr + N);
	bt(0, 0, "");
	return 0;
}