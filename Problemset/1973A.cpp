#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

void solve()
{
    int a, b, c; cin >> a >> b >> c;
	
    if ((a + b + c) % 2 != 0)
    {
		cout << -1 << '\n';
		return;
	}

	int cnt = 0;
	multiset<int> se; 
	vector<int> ar = {a, b, c};
	while(!(ar[0] == 0 && ar[1] == 0))
    {
		ar[2] -= 1;
		ar[1] -= 1;
		cnt++;
		sort(all(ar));
	}
	
    cout << cnt << '\n';
}

int main()
{
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
