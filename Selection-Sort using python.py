#Name: Salma Osama Kandill
#ID:241356
#Section: 9

def selectionSort(array ,size):
    for i in range (size):
        min_index=i
        
        # Find minimum element in every iteration
        for j in range (i+1,len(array)):
            if array[j]<array[min_index]:
                min_index=j 
                
        # swapping the elements 
        (array[i],array[min_index])=(array[min_index],array[i])

#Main program
array=[-2,45,0,11,-9,88,-97,-202,747]
print('The Original Array: \n', array)

size=len(array)
selectionSort(array,size)

print ('Sorted Array Using Selection Sort : \n' ,array)