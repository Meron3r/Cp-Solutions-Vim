#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, f, k; cin >> n>> f >> k;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    
    int index = a[f - 1];
    sort(a, a + n, greater<int>());

    if(n == k)
      cout << "YES" << '\n';
    else if ((a[k - 1] <= index) && (a[k] < index))
      cout << "YES" << '\n';
    else if ((a[k - 1] == index) && (a[k] == index))
      cout << "MAYBE" << '\n';
    else
      cout << "NO" << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
