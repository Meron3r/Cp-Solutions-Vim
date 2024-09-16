#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string a; cin >> a;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'L' || a[i] == 'R')
            cout << a[i];
        
        if (a[i] == 'U')
            cout << 'D';
        else if (a[i] == 'D')
            cout << 'U';
    }
    
    cout << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
