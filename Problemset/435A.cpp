#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;

    int ans = 0, bus = m;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;

        if (bus - x >= 0)
            bus -= x;
        else 
        {
            ans++;
            bus = m - x;
        }
    }
 
    cout << ans + 1 << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
