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
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        int minvalue = a[0];
        int res = -1e9;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > minvalue)
            {
                res = max(res, a[i] - minvalue);
            }
            minvalue = min(a[i], minvalue);
        }
        if(res == -1e9) 
        {
            cout<<"-1\n";
        }else{
            cout<<res<<"\n";
        }
    }
    return 0;
}