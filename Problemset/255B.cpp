#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string a; cin >> a;

    int x, y; x = y = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'x') x++;
        else y++;
    }

    if (x - y > 0)
    {
        for (int i = 0; i < x - y; i++)
            cout << 'x';
        cout << '\n';
    }
    else if (x - y < 0)
    {
        for (int i = 0; i < y - x; i++)
            cout << 'y';
        cout << '\n';
   }
}
int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
