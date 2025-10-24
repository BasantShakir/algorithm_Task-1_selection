def selection_sort(arr):
    
  n = len(arr)
   
  
  for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j 
      arr[i], arr[min_index] = arr[min_index], arr[i]


def print_array(arr):
    for i in arr:
        print(i, end=" ")
    print()


arr = [26, 7, 20, 30, 72]


print("Before sorting:", end=" ")
print_array(arr)

selection_sort(arr)
print("After sorting:", end=" ")
print_array(arr)