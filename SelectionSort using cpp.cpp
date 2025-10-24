//Name: Salma Osama Kandill
//ID:241356
//Section: 9

#include <iostream>
using namespace std;

int selectionsort (int arr[],int arr_size){
    for (int i=0 ;i<arr_size-1;i++){
        int min_index=i;
        for (int j=i+1;j<arr_size;j++){
            if (arr[j]<arr[min_index]){
                 min_index=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int arr[]={-2,45,0,11,-9,88,-97,-202,747};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
 selectionsort(arr,arr_size);

cout<<"The Original Array:"<<endl;
   for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
cout<<"Sorted Array Using Selection Sort :" <<endl;
for (int i = 0; i <arr_size; i++)
        cout << arr[i] << " ";
        return 0;
}
