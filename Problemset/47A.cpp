#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    ll n; cin >> n;

    for (ll i = 1; i < 100; i++)
    {
        ll sum = (i * (i + 1)) / 2;
        //cout << sum << '\n';
        if (n == sum)
        {
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO" << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
