#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool isSorted(vector<int> a)
{
    vector<int> a2 = a;
    sort(all(a2));

    if (a == a2)
        return true;
    else
        return false;
}

void solve()
{
    int n; cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = 0;
    while (!isSorted(a))
    {
        cnt++;
        for (int i = 0; i < n; i++)
            a[i] = max(0, a[i] - 1);
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
