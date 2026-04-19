# space 1 

a=[1,2,3,4,5,6] # array of values 
def bsort(arr):
    n = len (arr)
    flag = True
    while flag :
        flag =False 
        for i in range(1,n):
            if arr[i-1]>arr[i]:
                flag = True
                arr[i-1],arr[i] = arr[i], arr[i-1]
bsort(a)
print(a)
