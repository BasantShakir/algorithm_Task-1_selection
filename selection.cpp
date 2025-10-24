//عمر محمد متولي السيد حسين

#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}