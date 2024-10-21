#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    vector<double> m(5);
    for (int i = 0; i < 5; i++)
        cin >> m[i];
    vector<double> w(5);
    for (int i = 0; i < 5; i++)
        cin >> w[i];
    vector<double> x = {500, 1000, 1500, 2000, 2500};
    int hs, hu; cin >> hs >> hu;
    
    double ans = 0;

    for (int i = 0; i < 5; i++)
        ans += max(0.3 * x[i], (1 - (m[i] / 250)) * x[i] - (50 * w[i]));
    ans += hs * 100 + hu * -50;

    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
