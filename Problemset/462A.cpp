#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool cancheck(int i, int j, int n)
{
    if (i >= n || j >= n || j < 0 || i < 0)
        return false;
    return true;
}

void solve()
{
    int n; cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int cnt = 0;

            if (cancheck(i - 1, j, n))
                cnt += a[i -1][j] == 'o';
            if (cancheck(i + 1, j, n))
                cnt += a[i + 1][j] == 'o';
            if (cancheck(i, j - 1, n))
                cnt += a[i][j - 1] == 'o';
            if (cancheck(i, j + 1, n))
                cnt += a[i][j + 1] == 'o';

            if (cnt % 2 != 0)
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }

    cout << "YES" << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
