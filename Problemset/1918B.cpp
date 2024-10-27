#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i].first;
    for (int i = 0; i < n; i++)
        cin >> a[i].second;
    sort (all(a));

    for (int i = 0; i < n; i++)
        cout << a[i].first << ' ';
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << a[i].second << ' ';
    cout << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
