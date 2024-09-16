#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;
    
    int cnt = 0; bool big = false;
    for (int i = 1; i < 100 && !big; i++)
    {
        for (int j = 1; j < 100 && !big; j++)
        {
            int powi, powj;
            powi = pow(i, 2); powj = pow(j, 2);

            if (powi * j == n && i * powj == m)
                cnt++;
            if (powi * j > n || i * powj > m)
                big = true;
        }
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
