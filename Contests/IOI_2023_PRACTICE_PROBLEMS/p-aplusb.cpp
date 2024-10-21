#include <bits/stdc++.h>

using namespace std;

#define debug cout << "I was here!" << '\n'
#define all(a) a.begin(), a.end()

typedef unsigned u;
typedef long long ll;

vector<int> smallest_sums(int N, vector<int> A, vector<int> B)
{
    vector<int> ans2;
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            ans2.push_back(A[i] + B[j]);
    sort(all(ans2));
    
    //for (auto i : ans2)
    //    cout << i << ' ';
    //cout << '\n';

    vector<int> ans(N);
    for (int i = 0; i < N; i++)
        ans[i] = ans2[i];
    
    return ans;
}

int main()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> out = smallest_sums(n, a, b);
    for (auto i : out)
        cout << i << ' ';
    cout << '\n';

    return 0;
}
