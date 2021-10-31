#include <bits/stdc++.h>
using namespace std;
long long min(long long  a, long long b)
{
    return a > b ? b : a;
}

long long max(long long  a, long long b)
{
    return a > b ? a : b;
}

int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;cin>>n;
        long long a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int res = INT_MAX;
        for (int i = 1; i < n; ++i)
        {
            res = min(res, a[i] - a[i-1]);
        }
        cout<< res << endl;
    }
    return 0;
}