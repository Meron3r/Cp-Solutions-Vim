#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    
    swap(a[0], a[1]);
    swap(a[1], a[2]);
    swap(a[2], a[3]);
    
    vector<int> ar = {a[1], a[3], a[2], a[0]};

    
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
