#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string a; cin >> a;
    
    vector<int> pref_sum(a.size(), 0);
    for (int i = 1; i < a.size(); i++)
        pref_sum[i] = pref_sum[i - 1] + (a[i] == a[i - 1]);

    int q; cin >> q;
    while (q--)
    {
        int l, r; cin >> l >> r;
        
        cout << pref_sum[r - 1] - pref_sum[l - 1] << '\n';
    }
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
