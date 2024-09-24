#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    ll a, b, k; cin >> a >> b >> k;
 
    ll x = (k/2)*(a-b);
    if(k % 2 != 0)
        x += a;
 
    cout << x << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
