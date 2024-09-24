#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    if (n == 1)
        cout << 2 << '\n';
    else if (n % 3 == 0)
        cout << n / 3 << '\n';
    else
        cout << n / 3 + 1 << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
