#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    vector<int> h(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    
    int mn = abs(h[0] - h[1]);
    int ans = 0; 
    for (int i = 0; i < n; i++)
    {
        int next = (i + 1) % n;
        int diff = abs(h[i] - h[next]);
        if (diff < mn)
        {
            mn = diff;
            ans = i;
        }
    }
    
    cout << ans + 1 << " " << (ans + 2 > n ? 1 : ans + 2) << '\n';

}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
