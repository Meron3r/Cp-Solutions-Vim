#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    int mx = a[0], ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
        {
            ans++;
            mx = a[i];
        }
    }

    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
