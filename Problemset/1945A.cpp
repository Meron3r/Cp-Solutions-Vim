#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b, c; cin >> a >> b >> c;
 
    while (b % 3 != 0)
    {
        if (c > 0)
        {
            b++;
            c--;
        }
        else
            break;
    }
    
    if (b % 3 != 0)
    {
        cout << -1 << '\n';
        return;
    }
 
    ll ans = a;
    ans += b / 3;
    ans += c / 3;
    c %= 3;
 
    if (c)
        ans++;
        
    cout << ans << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
