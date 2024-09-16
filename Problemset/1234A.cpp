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
    ll sum = 0;    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
        
    ll mn = (sum + n - 1) / n;
    cout << mn << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}