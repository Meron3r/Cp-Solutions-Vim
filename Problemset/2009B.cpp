#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++) 
    {
        string s; cin >> s;
        int j = find(all(s), '#') - s.begin();
        a.push_back(j + 1);
    }

    reverse(all(a));

    for (int i : a) cout << i << " ";
    cout << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
