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

    if (count(all(a), 'I') > 1)
    {
        cout << 0 << '\n';
        return;
    }
    else if (count(all(a), 'I') == 1)
    {
        cout << 1 << '\n';
        return;
    }

    cout << count(all(a), 'A') << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
