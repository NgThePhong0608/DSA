#include <iostream>

int main(int argc, char const *argv[])
{
    int a[] = {9, 5, 1, 3, 4, 2, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    mergeSort(a, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << "  ";
    }
    return 0;
}
