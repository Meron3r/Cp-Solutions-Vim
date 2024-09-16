#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;

    vector<string> a1(n), a2(n), a3(n);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < n; i++)
        cin >> a2[i];
    for (int i = 0; i < n; i++)
        cin >> a3[i];
    
    int cnt1, cnt2, cnt3;
    cnt1 = cnt2 = cnt3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (!binary_search(all(a2), a1[i]) && !binary_search(all(a3), a1[i])) cnt1 += 3;
        if (!binary_search(all(a2), a1[i]) && binary_search(all(a3), a1[i])) cnt1++;
        if (binary_search(all(a2), a1[i]) && !binary_search(all(a3), a1[i])) cnt1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (!binary_search(all(a1), a2[i]) && !binary_search(all(a3), a2[i])) cnt2 += 3;
        if (!binary_search(all(a1), a2[i]) && binary_search(all(a3), a2[i])) cnt2++;
        if (binary_search(all(a1), a2[i]) && !binary_search(all(a3), a2[i])) cnt2++;
    }
    for (int i = 0; i < n; i++)
    {
        if (!binary_search(all(a2), a3[i]) == a2.end() && !binary_search(all(a1), a3[i])) cnt3 += 3;
        if (!binary_search(all(a2), a3[i]) == a2.end() && binary_search(all(a1), a3[i]) != a1.end()) cnt3++;
        if (binary_search(all(a2), a3[i]) != a2.end() && !binary_search(all(a1), a3[i]) == a1.end()) cnt3++;
    }


    cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
