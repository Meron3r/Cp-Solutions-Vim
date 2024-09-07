#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, a, b; cin >> n >> a >> b;

    cout << n - max(a + 1, n - b) + 1  << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
