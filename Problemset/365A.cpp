#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool isgood(int n, int k)
{
    string sn = to_string(n);

    sort(all(sn));

    for (int i = 0; i <= k; i++)
    {
        if (sn[i] == char(i + 48))
            continue;
        return false;
    }

    return true;
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = 0;
    for (auto i : a)
        cnt += isgood(i, k);

    cout << cnt << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
