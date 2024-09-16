#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n, x; cin >> n >> x;

    int cnt = 0;
    for (int i = 1; i <= sqrt(x); i++) 
    {
        if (x % i == 0) 
        {
            int j = x / i;
            
            if (i <= n && j <= n)
            {
                cnt++;
                if (i != j && j <= n)
                    cnt++;
            }
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
