#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string a; cin >> a;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            cout << i + 1 << ' ' << i + 2 << '\n';
            return;
        }
    }

    cout << "-1 -1" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
