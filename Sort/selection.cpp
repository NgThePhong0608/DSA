#include <bits/stdc++.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void outputArray(int *a)
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << "  ";
    }
}

void selectionSort(int *a)
{
    for (int i = 0; i < 8; i++)
    {
        int min = i;
        for (int j = i + 1; j < 9; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}
int main()
{
    int a[] = {9, 5, 1, 3, 4, 2, 6, 7, 8};
    selectionSort(a);
    outputArray(a);
    return 0;
}