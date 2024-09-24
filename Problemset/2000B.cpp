#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        int c; cin >> c;

        if (i > 0)
        {
            if (mp[c + 1] > 0 || mp[c - 1] > 0)
                mp[c]++;
            
            else
            {
                cout << "NO" << '\n';
                return;
            }
        }

        else
            mp[c]++;
    }

    cout << "YES" << '\n';
}
int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
