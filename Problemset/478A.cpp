#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    ll c1, c2, c3, c4, c5; cin >> c1 >> c2 >> c3 >> c4 >> c5;
 
	ll sum = c1 + c2 + c3 + c4 + c5;
	ll avrage = sum / 5;
 
	if (sum % 5 > 0 || sum == 0)
	{
		cout << -1 << '\n';
		return;
	}

    cout << avrage << '\n'; 
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
