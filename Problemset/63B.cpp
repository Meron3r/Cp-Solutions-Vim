#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool done(vector<int> a, int k)
{
    for (auto i : a)
        if (i != k) return false;
    
    return true;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = 0, cur = 0;
    while (!done(a, k))
    {
        ans++;
        cur = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != cur && a[i] != k)
            {
                cur = a[i];
                a[i]++;
            }
        }
        sort(all(a));
    }

    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
