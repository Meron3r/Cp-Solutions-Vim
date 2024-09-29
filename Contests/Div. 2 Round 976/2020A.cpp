#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    ll n, k;

    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        for (int i = 1; i < 1000; i++)
        {
            if (n < pow(k, i))
            {
                n -= pow(k, i - 1);
                break;
            }
        }
    }
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
