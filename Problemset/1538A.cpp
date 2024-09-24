#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    vector<pair<int,int>> a(n + 5);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(all(a));
    
    cout << min({max(a[0].second, a[n - 1].second), a[0].second + n - a[n - 1].second + 1,
            n - a[0].second + a[n - 1].second + 1, n - min(a[0].second, a[n - 1].second) + 1}) << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
