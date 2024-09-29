#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> a1, a2; a1 = a2 = a;
    
    int mx1, mx2, cnt1, cnt2; cnt1 = cnt2 = mx1 = mx2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0) 
        {
            cnt1++;
            mx1 = max(mx1, a1[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cnt2++;
            mx2 = max(mx2, a2[i]);
        }
    }

    cout << max(mx1 + cnt1, mx2 + cnt2) << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
