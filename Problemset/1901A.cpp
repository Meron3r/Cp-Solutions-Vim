#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, x; cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int mx = 0;
    for(int i = 0; i < n - 1; i++)
        mx = max(mx, a[i + 1] - a[i]);
    
    mx = max(mx, a[0]);
    mx = max(mx, 2 * (x - a[n - 1]));

    cout << mx << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
