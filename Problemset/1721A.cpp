#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    set<char> a;
    for (int i = 0; i < 4; i++)
    {
        char c; cin >> c;
        a.insert(c);
    }
    
    cout << a.size() -1 << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
