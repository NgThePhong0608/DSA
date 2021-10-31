#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000002];

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        memset(cnt, 0, sizeof(cnt));
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                cnt[x] = 1;
            }
        }
        for (int i = 1; i <= 1e6 + 1; i++)
        {
            if (!cnt[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}