#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    
    int i = 0, cnt = 0;
    while (i <= 5)
    {
        if (x.find(s) != string::npos) 
        {
            cout << cnt << '\n';
            return;
        }

        x = x.append(x);
        i++;
        cnt++;
    }

    cout << "-1" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
