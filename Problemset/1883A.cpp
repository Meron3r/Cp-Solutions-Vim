#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

map<char, int> pos =
{
    {'1', 1},
    {'2', 2},
    {'3', 3},
    {'4', 4},
    {'5', 5},
    {'6', 6},
    {'7', 7},
    {'8', 8},
    {'9', 9},
    {'0', 10}
};

void solve()
{
    string a; cin >> a;
    
    int cnt = 0, cur = 1;
    for (auto i : a)
    {
        cnt += 1 + abs(cur - pos[i]);
        cur = pos[i];
    }

    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
