#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, t; cin >> n >> t;
    
    if (t == 10) 
    {
        if (n == 1)
        {
            cout << -1 << '\n';
            return;
        }
        
        cout << "1";
        for (int i = 1; i < n; i++) 
            cout << "0";
        cout << '\n';   
    } 

    else 
    {
        string ans(n, '0');
        ans[0] = '1';
        ans[n - 1] = '0' + t;

        if (t > 9) 
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
