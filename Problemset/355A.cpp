#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int k, d; cin >> k >> d;

    if (d == 0) 
    {
        if (k == 1)
            cout << "0" << '\n';
        else
            cout << "No solution" << '\n';
        
        return;
    }

    string ans(k, '0');
    ans[0] = '0' + d;

    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
