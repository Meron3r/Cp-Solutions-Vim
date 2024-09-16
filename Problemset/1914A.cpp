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

    map<char, int> cnt;
    for (int i = 0; i < n; i++)
        cnt[a[i]]++;
    
    int ans = 0;
    for (char i = 'A'; i <= 'Z'; i++)
        if (cnt[i] >= ((int) i) - 64)
            ans++;
    
    cout << ans << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
