#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;

    int misha, vasya;
    misha = max((3 * a) / 10, a - (a / 250) * c);
    vasya = max((3 * b) / 10, b - (b / 250) * d);

    if (misha == vasya)
    {
        cout << "Tie" << '\n';
        return;
    }

    cout << (max(misha, vasya) == misha ? "Misha" : "Vasya") << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
