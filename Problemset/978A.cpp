#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    deque<int> a(n), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = n - 1; i >= 0; i--)
        if (find(all(ans), a[i]) == ans.end())
            ans.push_front(a[i]);
    
    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';
    
    cout << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
