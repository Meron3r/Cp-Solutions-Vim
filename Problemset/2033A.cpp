#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    if (n % 2 == 0) cout << "Sakurako" << '\n';
    else cout << "Kosuke" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
