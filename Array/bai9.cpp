#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cnt[1000002];

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a > b ? b : a;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n,k;cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        int sum = 0;
        for (int i = 0; i < k; ++i)
        {
            sum += a[i];
        }
        int res = sum;
        int idx = 0;
        for (int i = k; i < n; ++i)
        {
            sum = sum - a[i - k] + a[i];
            if (sum > res)
            {
                res = sum;
                idx = i - k + 1;
            }
        }
        for (int i = 0; i < k; ++i)
        {
            cout<<a[idx + i] << "  ";
        }
        cout<<endl;
    }
    return 0;
}