#include <iostream>

void merge(int *la, int *ra, int *a, int n)
{
    int leftsize = n / 2;
    int rightsize = n - leftsize;
    int i = 0, l = 0, r = 0;
    while (l < leftsize && r < rightsize)
    {
        if (la[l] < ra[r])
        {
            a[i] = la[l];
            i++;
            l++;
        }
        else
        {
            a[i] = ra[r];
            i++;
            r++;
        }
    }
    while (l < leftsize)
    {
        a[i] = la[l];
        i++;
        l++;
    }
    while (r < rightsize)
    {
        a[i] = ra[r];
        i++;
        r++;
    }
}

void mergeSort(int *a, int n)
{
    if (n <= 1)
    {
        return;
    }
    int middle = n / 2;
    int *la = new int[middle];
    int *ra = new int[n - middle];

    int i = 0; // la
    int j = 0; // ra
    for (; i < n; i++)
    {
        if (i < middle)
        {
            la[i] = a[i];
        }
        else
        {
            ra[j] = a[i];
            j++;
        }
    }
    mergeSort(la, n - middle);
    mergeSort(ra, n - middle);
    merge(la, ra, a, n);
}
int main(int argc, char const *argv[])
{
    int a[] = {9, 5, 1, 3, 4, 2, 6, 7, 8};
    mergeSort(a, 9);
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << "  ";
    }
    return 0;
}
