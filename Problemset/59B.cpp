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

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    
    if (sum % 2 != 0)
    {
        cout << sum << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum -= a[i];
            cout << sum << '\n';
            return;
        }
    }

    cout << 0 << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
