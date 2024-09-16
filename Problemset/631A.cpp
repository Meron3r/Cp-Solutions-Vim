#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

int func(int l, int r, vector<int> a)
{
    int ans = a[l];
    for (int i = l + 1; i <= r; i++)
        ans = ans | a[i];
    
    return ans;
}

void solve()
{
    int n; cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    int mx = -1;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            mx = max(mx, func(i, j, a) + func(i, j, b));
    
    if (mx == -1)
        mx = a[0] + b[0];

    cout << mx << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
