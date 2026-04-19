c = [1,3,2,5,4,7,6,8,8,9,10]

def ssort(arr):
    n = len(arr)
    for i in range (n):
        min_index=i
        for j in range (i,n):
            if arr[j]<arr[min_index]:
                min_index=j
        arr[i],arr[min_index]=arr[min_index],arr[i]
    return arr
print(ssort(c))