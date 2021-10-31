#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int max(int a, int b)
{
    return a > b ? a : b;
}

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int min(int a, int b)
{
    return a > b ? b : a;
}

const int maxN = 1e6;
int a[maxN];

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            res = gcd(res, a[i]);
        }
        int ans = 1;
        for (int i = 2; i <= sqrt(res); ++i)
        {
            if (res % i == 0)
            {
                ans++;
                if (i != res / i)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}