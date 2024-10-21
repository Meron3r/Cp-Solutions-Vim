#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    
    string s = "";   
    for (int i = 1; i <= 12; i++) 
    {
        if (i == a || i == b) s += "a";
        else if (i == c || i == d) s += "b";
    }

    if (s == "abab" || s == "baba") cout << "YES" << '\n';
    else cout << "NO" << '\n';

}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
