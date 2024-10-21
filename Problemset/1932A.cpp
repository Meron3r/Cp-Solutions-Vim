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

    int cnt = 0; int dng = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '@')
            cnt++;

        if (a[i] == '*' && dng > 0)
            break;

        if (a[i] == '*')
        {
            i++;
            dng++;
            continue;
        }

        dng = 0;
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
