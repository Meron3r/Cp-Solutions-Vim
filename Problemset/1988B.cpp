#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int ones = 0, zeros = 0;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '1')
        {
            ones++;
            i++;
        }

        else
        {
            while (i < s.length() && s[i] == '0')
                i++;
            
            zeros++;
        }
    }
 
    if (zeros >= ones)
      cout << "NO" << '\n';
    else
      cout << "YES" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
