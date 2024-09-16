#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
	
    int ans = 0;
	for (int i = 0; i < n; i++)
    {
		int a, b; cin >> a >> b;

		ans += (a > b);
	}

	cout << ans << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
