def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        # افترض أن العنصر الحالي هو الأصغر
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        # تبديل العنصر الأصغر مع العنصر الحالي
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

# مثال على الاستخدام
numbers = [64, 25, 12, 22, 11]
sorted_numbers = selection_sort(numbers)
print("Order List:", sorted_numbers)
