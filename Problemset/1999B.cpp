#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    unsigned short a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;

    int win = 0;
    
    if (a1 > b1 && a2 > b2 && a1 > b2 && a2> b1) win = 4;
    else if (((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)) && ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1))) win = 4;
    else if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2) || (a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1)) win = 2;
    
    cout << win << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
