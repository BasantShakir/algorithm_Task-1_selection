def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        min_idx = i

        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j

        arr[i], arr[min_idx] = arr[min_idx], arr[i]

    return arr

my_list = [70, 30, 10, 20, 9]
sorted_list = selection_sort(my_list)
print(f"first array : [70, 30, 10, 20, 9]")
print(f"sorted Selection Sort: {sorted_list}")


