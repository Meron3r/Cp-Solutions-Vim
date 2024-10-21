#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
     int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> sa = a;
    sort(all(sa));
    
    if (k == 1) 
    {
        if (a == sa)
            cout << "YES";
        else 
            cout << "NO";
    }
    else
        cout << "YES";

    cout << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
