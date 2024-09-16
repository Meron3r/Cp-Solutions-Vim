#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
 
    int total_cups = a1 + a2 + a3;
    int total_medals = b1 + b2 + b3;
 
    int cup_shelves = (total_cups + 4) / 5;  
    int medal_shelves = (total_medals + 9) / 10;  
    if (cup_shelves + medal_shelves <= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl; 
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
