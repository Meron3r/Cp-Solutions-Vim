#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    ll x, y, a, b; cin >> x >> y >> a >> b;
        
    ll dis = y - x;
    ll sum = a + b;
        
    if (dis % sum == 0)
        cout << dis / sum << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
