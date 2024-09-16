#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) 
    {
        if (a[i] < 0 && k)
        {
            a[i] *= -1;
            k--;
        }
    }

    sort(a.begin(), a.end());

    if (k & 1)
        a[0] *= -1;
    
    cout << accumulate(all(a), 0ll) << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
