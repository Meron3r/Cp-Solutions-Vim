#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int n; cin >> n;
    string a; cin >> a;
 
    unordered_map<char, int> freq; 
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    
    int ones = freq['n'];
    int zeroes = freq['z'];
 
    for (int i = 0; i < ones; i++)
        cout << 1 << " ";
 
    for (int i = 0; i < zeroes; i++)
        cout << 0 << " ";

    cout << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
