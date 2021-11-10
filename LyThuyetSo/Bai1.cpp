#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
    bool check = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = false;
            break;
        }
    }
    if (!check)
    {
        return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int tc; 
    cin >> tc;
    while (tc--)
    {
        int n; 
        cin >> n;
        if (nt(n))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}
