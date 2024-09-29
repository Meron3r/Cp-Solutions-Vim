#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, k; cin >> n >> k;

    ll cnt = 0;
    for (int i = n; i > n - k && i >= 1; i--)
        cnt += pow(i, i);
    
    if (cnt % 2 == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
