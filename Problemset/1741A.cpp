#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string a, b; cin >> a >> b;
    
    int x1, x2;
    x1 = a.size() - 1; x2 = b.size() - 1;

    if (a == b)
        cout << '=' << '\n';

    else if (a.back() == b.back())
    {
        if (a.back() == 'L')
        {
            if (x1 > x2) cout << '>' << '\n';
            else cout << '<' << '\n';
        }

        else if (a.back() == 'S')
        {
            if (x1 < x2) cout << '>' << '\n';
            else cout << '<' << '\n';
        }
    }

    else
    {
        if (min(a.back(), b.back()) == a.back()) cout << '>' << '\n';
        else cout << '<' << '\n';
    }
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
