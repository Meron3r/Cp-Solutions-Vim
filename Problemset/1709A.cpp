#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int x; cin >> x;
    
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
        cin >> a[i];
 
    if (a[x - 1] == 0 || a[a[x - 1] - 1] == 0)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
