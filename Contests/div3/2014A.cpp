#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int g = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= k) g += a[i];
        if (a[i] == 0 && g > 0)
        {
            cnt++;
            g--;
        }
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
