#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even.push_back(i + 1);
        else
            odd.push_back(i + 1);
    }

    if (even.size() == 1)
        cout << even.front() << '\n';
    else
        cout << odd.front() << '\n';
}
int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
