import random


def rand_quicksort(arr, start, stop):
    if(start < stop):
        
        pivotindex = select_pivot(arr, start, stop)
        rand_quicksort(arr, start, pivotindex)
        rand_quicksort(arr, pivotindex + 1, stop)




def select_pivot(arr, start, stop):
    randpivot = random.randrange(start, stop)
    arr[start], arr[randpivot] = arr[randpivot], arr[start]
    return partition(arr, start, stop)


def partition(arr, start, stop):
    pivot = start  # pivot
    i = start - 1
    j = stop + 1
    while True:
        while True:
            i = i + 1
            if arr[i][2] <= arr[pivot][2]:
                break
        while True:
            j = j - 1
            if arr[j][2] >= arr[pivot][2]:
                break
        if i >= j:
            return j
        arr[i], arr[j] = arr[j], arr[i]


def display(array):
    print("Roll_no\t\t\tName   \t\t\tMarks")
    for i in range(len(array)):
        x, y, z = array[i][0], array[i][1], array[i][2]
        print(f"{x}\t\t\t{y}\t\t\t{z}")


array1 = [[1, 'Anand', 85], [3, 'Hari', 72], [
    5, 'Khanna', 100], [7, 'Santhosh', 83], [9, 'Selvi', 80]]
array2 = [[2, 'Bose', 85], [4, 'Devi', 72], [
    6, 'Raji', 100], [8, 'Ruby', 83], [10, 'UMA', 80]]

print("Unsorted Table A : ")
display(array1)
rand_quicksort(array1, 0, len(array1) - 1)
print("------------------------------------------------------------------------")
print("Sorted Table A :")
display(array1)
print("------------------------------------------------------------------------")
print("Unsorted Table B :")
display(array2)
rand_quicksort(array2, 0, len(array2) - 1)
print("------------------------------------------------------------------------")
print("Sorted Table B :")
display(array2)
array3 = []
array3.extend(array1)
array3.extend(array2)
print("Unsorted Combined Table :")
display(array3)
rand_quicksort(array3, 0, len(array3) - 1)
print("------------------------------------------------------------------------")
print("Sorted Combined Table :")
display(array3)