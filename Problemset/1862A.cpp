#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;
    
    char a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            cin >> a[i][j];
    
    string s = "vika";
    int id = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == s[id])
            {
                id++;
                if (id == 4)
                {
                    cout << "YES" << '\n';
                    return;
                }
                break;
            }
        }
    }
    
    cout << "NO" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
