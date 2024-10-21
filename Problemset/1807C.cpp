#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; string s; cin >> n >> s;
    set<char> odd, even;
    for(int i = 0; i < n; i++) 
    {
        if(i & 1)
              odd.insert(s[i]);
        else
            even.insert(s[i]);
    }
    
    for (auto it = odd.begin(); it != odd.end(); ++it)
    {
        if(find(all(even), *it) != even.end()) 
        {
            cout << "NO" << '\n';
            return;
        }
    }
    
    cout << "YES" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
