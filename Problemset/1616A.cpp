#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
        a[abs(c)]++;
    }

    int cnt = 0;
    for (auto i : a)
        cnt += min((i.first == 0 ? 1 : 2), i.second);
    
    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
