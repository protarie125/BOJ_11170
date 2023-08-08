#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

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

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int a, b;
		cin >> a >> b;

		auto ans = ll{ 0 };
		for (auto i = a; i <= b; ++i) {
			auto s = to_string(i);
			for (const auto& x : s) {
				if ('0' == x) {
					++ans;
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}