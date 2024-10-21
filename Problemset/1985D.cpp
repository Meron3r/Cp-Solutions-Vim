#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int mxi = -1, mxj = -1;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
            if (a[i][j] == '#')
                cnt++;
        
        mxi = max(cnt, mxi);

        if (mxi != cnt)
        {
            cout << i << ' ';
            break;
        }

        if (i + 1 == n)
            cout << i + 1 << ' ';
    }
    
    //if (n == 1)
    //    cout << 1 << ' ';

    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (a[i][j] == '#')
                cnt++;
        
        mxj = max(cnt, mxj);

        if (mxj != cnt) 
        {
            cout << j << '\n';
            break;
        }

        if (j + 1 == m)
            cout << j + 1 << '\n';
    }

    //if (m == 1)
    //    cout << 1 << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
