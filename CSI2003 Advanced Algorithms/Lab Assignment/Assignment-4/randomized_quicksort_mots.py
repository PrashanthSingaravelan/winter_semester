import random


def quicksort(arr, start, stop):
    if(start < stop):
        # pivotindex is the index where the pivot lies in the array
        pivotindex = select_pivot(arr, start, stop)
        quicksort(arr, start, pivotindex)
        quicksort(arr, pivotindex + 1, stop)

# This function generates random pivot, swaps the first element with the pivot


def select_pivot(arr, start, stop):
    randpivot = random.randrange(start, stop)
    print("------------------------------------------------------------------------")
    print(f"Let the pivot be - {array[randpivot]}")
    arr[start], arr[randpivot] = arr[randpivot], arr[start]
    return partition(arr, start, stop)


def partition(arr, start, stop):
    pivot = start  # pivot
    i = start - 1
    j = stop + 1
    while True:
        while True:
            i = i + 1
            if arr[i] >= arr[pivot]:
                break
        while True:
            j = j - 1
            if arr[j] <= arr[pivot]:
                break
        if i >= j:
            return j
        arr[i], arr[j] = arr[j], arr[i]
        print(f"Swapping the elements {arr[i]} & {arr[j]} ==> {array}")


if __name__ == '__main__':
    array = [10, 7, 8, 9, 1, 5, 18, 6, 36, 4, 15]
    print(f"Unsorted array : {array}")
    temp_array = array
    quicksort(array, 0, len(array) - 1)
    print("------------------------------------------------------------------------")
    print(f"Sorted array :{array}")
