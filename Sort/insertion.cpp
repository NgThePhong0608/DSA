#include <bits/stdc++.h>

void insertion(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 and a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {9, 5, 1, 3, 4, 2, 6, 7, 8};
    insertion(a, 9);
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << "  ";
    }
    return 0;
}
