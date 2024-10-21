#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int i = 2, j = 0; string ans;
    while (j < n) {
        ans += s[j];
        j += i;
        i++;
    }

    cout << ans;
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
