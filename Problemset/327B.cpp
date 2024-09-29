#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

bool prime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

void solve()
{
    int n; cin >> n;

    int i = 0, j = 1;
    while (i < n)
    {
        if (prime(j)) cout << j << ' ', i++;
        j++;
    }
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
