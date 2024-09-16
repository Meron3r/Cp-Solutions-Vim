#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

int sumOfDigits(int a)
{
    if (a < 10) return a;
    return a % 10 + sumOfDigits(a / 10);
}

void solve()
{
    int a; cin >> a;
    
    while (sumOfDigits(a) % 4 != 0)
        a++;

    cout << a << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
