#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;

    vector<vector<int>> a(n, vector<int> (m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c; cin >> c;
            a[i][j] = c - 48;
        }
    }

    set<int> sc;
    for (int i = 0; i < m; i++)
    {
        int mx = -1;

        for (int j = 0; j < n; j++)
           mx = max(mx, a[j][i]);
        for (int j = 0; j < n; j++)
            if (a[j][i] == mx) sc.insert(j);
    }

    cout << sc.size() << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
