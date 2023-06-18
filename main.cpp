#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
map<string, int> cards;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	for (auto i = 0; i < n; ++i) {
		string s;
		int p;
		cin >> s >> p;

		cards[s] += p;
	}

	auto isBell = bool{ false };
	for (const auto& [k, v] : cards) {
		if (5 == v) {
			isBell = true;
			break;
		}
	}

	if (isBell) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}