#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b; cin >> a >> b;

    int awin, draw, bwin; awin = bwin = draw = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) == abs(b - i))
            draw++;
        else if (abs(a - i) < abs(b - i))
            awin++;
        else
            bwin++;
    }

    cout << awin << ' ' << draw << ' ' << bwin << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
