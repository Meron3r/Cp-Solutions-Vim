#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

// Problem Define
#define ctoi(c) c - 48

void solve()
{
    string a; cin >> a;
    
    int cnt = 1; bool flag = false;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i -1] != a[i])
            cnt++;
        if (a[i - 1] == '0' && a[i] ==  '1') 
            flag = true;
    }

    if (flag) cnt--;
    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
