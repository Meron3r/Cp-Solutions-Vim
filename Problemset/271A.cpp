#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool hasAllDistinct(int n)
{
    set<char> temp;
    string strN = to_string(n);

    for (int i = 0; i < strN.size(); i++)
        temp.insert(strN[i]);
    
    return temp.size() == strN.size();
}

void solve()
{
    int n; cin >> n;

    for (int i = n + 1; i < 9015; i++)
    {
        if (hasAllDistinct(i))
        {
            cout << i << '\n';
            return;
        }
    }
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
