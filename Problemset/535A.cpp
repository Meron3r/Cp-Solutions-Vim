#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define debug cout << "I was here!" << '\n'

typedef unsigned u;
typedef long long ll;

vector<string> d1a = 
{
   "twenty",
   "thirty",
   "forty",
   "fifty",
   "sixty",
   "seventy",
   "eighty",
   "ninety"
},
d2a =
{
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine"
};

void solve()
{
    int n; cin >> n;

    int d1 = n / 10, d2 = n % 10;

    if (d1 > 1)
        cout << d1a[d1 - 2];
    
    if (d1 > 1 && d2 > 0)
        cout << '-';

    if (d2 > 0 && d1 != 1)
        cout << d2a[d2 - 1];

    if (d2 == 0 && d1 == 0)
        cout << "zero";

    if (d1 == 1)
    {
        switch(d2)
        {
            case 0:
                cout << "ten";
                break;
            case 1:
                cout << "eleven";
                break;
            case 2:
                cout << "twelve";
                break;
            case 3:
                cout << "thirteen";
                break;
            case 4:
                cout << "fourteen";
                break;
            case 5:
                cout << "fifteen";
                return;
            case 6:
                cout << "sixteen";
                break;
            case 7:
                cout << "seventeen";
                break;
            case 8:
                cout << "eighteen";
                break;
            case 9:
                cout << "nineteen";
                break;
        }
    }

    cout << '\n';
}

int main()
{
    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
