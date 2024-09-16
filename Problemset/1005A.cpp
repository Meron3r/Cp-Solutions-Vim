#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> t;
    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1] - 1)
            t.push_back(a[i]);
    t.push_back(a.back());
    
    cout << t.size() << '\n';
    for (auto i : t)
        cout << i << ' ';
    cout << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
