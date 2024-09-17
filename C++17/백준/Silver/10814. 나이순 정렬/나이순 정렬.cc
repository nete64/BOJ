#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct User {
	int age;
	string name;
	int index;
};

bool cmp(User& a, User& b)
{
	if (a.age == b.age)
		return a.index < b.index;
	return a.age < b.age;
}

User user[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> user[i].age >> user[i].name;
		user[i].index = i;
	}

	sort(user, user + N, cmp);

	for (int i = 0; i < N; i++)
		cout << user[i].age << " " << user[i].name << '\n';

	return 0;
}