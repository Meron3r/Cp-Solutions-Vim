#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b, c; cin >> a >> b >> c;
    
    int x = sqrt(a * c / b);
    int y = sqrt(a * b / c);
    int z = sqrt(b * c / a);
    
    int ans = 4 * (x + y + z);
    
    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
