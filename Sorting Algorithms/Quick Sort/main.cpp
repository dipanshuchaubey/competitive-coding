#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[high];
    int j = low - 1;

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            j++;
            swap(&arr[j], &arr[i]);
        }
    }

    swap(&arr[j + 1], &arr[high]);
    return j + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {20, 10, 50, 80, 75, 90, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << "\n";

    return 0;
}