#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, s; cin >> n >> s;

    vector<int> f(n), t(n);
    for (int i = n - 1; i >= 0; i--)
        cin >> f[i] >> t[i];
    
    int tn = 0, fn = s;
    for (int i = 0; i < n; i++)
    {
        tn = max(tn + (fn - f[i]), t[i]);
        fn = f[i];
    }
    
    tn += fn;
    cout << tn << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
