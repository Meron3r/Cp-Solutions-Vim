#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool sylobil(char c)
{
    if (c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u')
        return true;

    return false;
}

void solve()
{
    string a, b, c;
    
    getline(cin, a); getline(cin, b); getline(cin, c);

    int cnta, cntb, cntc; cnta = cntb = cntc = 0;
    for (auto i : a)
        cnta += sylobil(i);
    for (auto i : b)
        cntb += sylobil(i);
    for (auto i : c)
        cntc += sylobil(i);
    
    if (cnta == 5 && cntb == 7 && cntc == 5)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
