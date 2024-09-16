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
    string temp;
    for (int i = 0; i < n; i++)
        cin >> temp >> a[i].first >> a[i].second;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i].first >= 2400 && a[i].first < a[i].second)
        {
            cout << "YES" << '\n';
            //cout << a[i].first << ' ' << a[i].second << '\n';
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
