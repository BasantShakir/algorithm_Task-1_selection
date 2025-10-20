// Rawan Mohamed ali (Section-4)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
  int n = arr.size();
  for (int i = 0; i < n - 1; i++){
    int min_idx = i;
    for (int j = i + 1; j < n; j++){
      if (arr[j] < arr[min_idx]){
        min_idx = j;
      }
    }
    if (min_idx != i){
      swap(arr[i], arr[min_idx]);
    }
  }
}

int main(){
  int n;
  cout << "Enter array size: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  selectionSort(arr);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}