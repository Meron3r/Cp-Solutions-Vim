#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, m; cin >> n >> m;
    string a; cin >> a;
    
    map<int,int>mp;
    for(char i = 'a'; i <= 'z'; i++)
        mp[i] = i;
 
    for(int i = 0; i < m; i++)
    {
        char x, y; cin >> x >> y;
        for(int ch = 'a'; ch <= 'z'; ch++)
        {
            if(mp[ch] == x)
                mp[ch] = y;
            else if(mp[ch] == y)
                mp[ch] = x;
        }
    }
 
    for(int i = 0; i < n; i++)
        a[i] = mp[a[i]];

    cout << a << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
