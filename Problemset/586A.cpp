#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;

            if (a[i + 1] == 0 && a[i + 2] == 1)
                cnt++;
        }
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
