#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a(pow(n, 2));
    for (int i = 0; i < pow(n, 2); i++)
        a[i] = i + 1;
    
    for (int i = 0, j = pow(n, 2) - 1; i < pow(n, 2) / 2 && j >= pow(n, 2) / 2; i++, j--)
        cout << a[i] << ' ' << a[j] << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
