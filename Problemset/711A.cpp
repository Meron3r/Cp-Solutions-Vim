#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
     
    bool found = false;
    for (int i = 0; i < n && !found; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j] == 'O')
            {
                a[i][j] = a[i][j + 1] = '+';
                found = true;
                break;
            }
        }
    }
    
    if (!found)
    {
        cout << "NO" << '\n';
        return;
    }
    else
        cout << "YES" << '\n';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << a[i][j];
        
        cout << '\n';
    }
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
