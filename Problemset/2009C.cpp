#include <bits/stdc++.h>
 
using namespace std;
 
#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()
 
typedef unsigned u;
typedef long long ll;
 
void solve()
{
    int x, y, k; cin >> x >> y >> k;
 
    int fx, fy, i; 
    fx = fy = 0; i = 0;
    while (!(fx ==x && fy == y))
    {
        i++;
        
        if (i % 2 == 1)
            fx += min(x - fx, k);
        else
            fy += min(y - fy, k);
    }
 
    cout << i << '\n';
}
 
int main()
{
    int t = 1; cin >> t;
    while (t--) solve();
 
    return 0;
}
