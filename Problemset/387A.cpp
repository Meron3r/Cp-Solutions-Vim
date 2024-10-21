#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int h1, h2, m1, m2; char temp;

    cin >> h1 >> temp >> m1;
    cin >> h2 >> temp >> m2;

    int ans = (h1 * 60 + m1) - (h2 * 60 + m2);
    if (ans < 0) ans += (24 * 60);

    int ha = ans / 60, ma = ans % 60;

    if (ha < 10) cout << '0';
    cout << ha << ':';

    if (ma < 10) cout << '0';
    cout << ma << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
