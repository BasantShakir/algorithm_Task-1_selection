//TOKA MOHAMMED ELALFY
#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        cout << "\n";
}

int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: \n";
    printArray(arr, size);

    selectionSort(arr, size);
    cout << "Array before sorting by (Selection Sort): \n";
    printArray(arr, size);
	return 0;
}
