#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, k; cin >> n >> k;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
        a[i] = make_pair(c, i + 1);
    }
    sort(all(a));

    vector<int> ans; int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i].first;
        if (sum > k)
            break;
        ans.push_back(a[i].second);
    }

    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
