#include <bits/stdc++.h>
#include <cstdint>

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
        a[i] = tolower(a[i]);
    a.erase(unique(all(a)), a.end());

    cout << (a == "meow" ? "YES" : "NO") << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
