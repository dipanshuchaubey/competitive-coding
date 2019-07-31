#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {435, 334, 123, 43, 135, 46};

    for (int i = 1; i < (sizeof(arr) / sizeof(*arr)); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    for (int i = 0; i < (sizeof(arr) / sizeof(*arr)); i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";
    return 0;
}