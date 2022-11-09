def sortPrint(arr):

    for i in range(len(arr)):
        for j in range(len(arr)-1, i, -1):
            if arr[j]<arr[j-1]:
                arr[j], arr[j-1] = arr[j-1], arr[j]
        print(arr[:i+1])


if __name__ == '__main__':
    arr = [1,3,5,2,9,4,8,7,6]
    sortPrint(arr)