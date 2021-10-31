#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000002];
const int MOD = 1e9 + 7;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        ll lt = 1, res = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            res += a[i] * lt;
            res %= MOD;
            lt *= x;
            lt %= MOD;
        }
        cout << res << endl;
    }
    return 0;
}