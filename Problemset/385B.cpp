#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    string s; cin >> s;
 
    int n2 = s.size(), sum = 0, n = 0;
    for (int i = 0; i < n2; i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r')
        {
            sum += n2 - (i + 3);
            sum += (n2 - (i + 3)) * (i - n);
            n = i + 1;
        }
    }
    
    cout << sum << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
