#include <bits/stdc++.h>
using namespace std;

long long max(long long a, long long b)
{
    return a > b ? a : b;
}

void swab(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int cnt[1000001] = {0};

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] > b[j])
            {
                swab(a[i], b[j]);
            }
        }
    }

    return 0;
}