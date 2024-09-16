#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
        
    if (n >= 3 || s == "11" || s == "00")
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
