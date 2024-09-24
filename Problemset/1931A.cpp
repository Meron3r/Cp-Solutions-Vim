#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<int> a;
    for(int i = 1 ; i <= 26 ; i++) 
        a.push_back(i);
    
    string s;
    int l = 3;
    while (l--)
    {
        int idx = lower_bound(a.begin(), a.end() , n - l)  - a.begin();
        if (idx == 26) idx--;
        s += (char) a[idx] + 'a' - 1;
        n = n - idx - 1;
    }

    sort(s.begin(),s.end());

    cout << s << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
