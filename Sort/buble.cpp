#include <iostream>

void buble(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {9, 5, 1, 3, 4, 2, 6, 7, 8};
    buble(a, 9);
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << "  ";
    }
    return 0;
}
