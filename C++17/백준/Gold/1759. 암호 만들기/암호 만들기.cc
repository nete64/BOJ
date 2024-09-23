#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int L, C;
string s="";
int alpha[20];
bool visited[20];
bool is_vowel(int i) {
	if (alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' || alpha[i] == 'o' || alpha[i] == 'u')
		return true;
	return false;
}

void bt(int depth, int curr, int consonant, int vowel)
{
	if (depth == L && vowel >= 1 && consonant >= 2) {
		cout << s << "\n";
		return;
	}

	for (int i = curr; i < C; i++) {
		if (!visited[i]) {
			visited[i] = true;
			s += alpha[i];
			if (is_vowel(i))
				bt(depth + 1, i + 1, consonant, vowel + 1);
			else
				bt(depth + 1, i + 1, consonant + 1, vowel);
			s.pop_back();
			visited[i] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		char c; cin >> c;
		alpha[i] = (int)c;
	}
	sort(alpha, alpha + C);
	bt(0, 0, 0, 0);

	return 0;
}