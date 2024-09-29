#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string s; cin >> s;
    int n; cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));

    bool found = false;
    for(int i = 0; i < a.size(); i++)
    {
        string ans =  a[i];
        int left = 0;

        while (left < s.size())
        {
            if (s[left] == ans[left])
                left++;
            else
                break;
        }

        if (left == s.size())
        {
            found = true;
            cout << ans << '\n';
            break;
        }

        if (found)
            break;
    }

    if (!found) 
        cout << s << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
