#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string s, ans = "", ck = ""; cin >> s;
    
    vector<string> a(10);
    for (int i = 0; i < 10; i++)
        cin >> a[i]; 
    
    for (int i = 0; i < 80; i += 10)
    {
        for (int j = 0; j < 10; j++)
            ck += s[i + j];
        
        for (int k = 0;k < 10; k++)
            if (ck == a[k])
                ans += to_string(k);
        
        ck = "";
    }

    cout << ans << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
