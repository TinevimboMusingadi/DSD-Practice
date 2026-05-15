// this is an implmentation of binary search in c 

#include <stdio.h>
#include <sdtlib.h> 
int binarySearch(int arr[], int n, int target)
{
    int low = o , high = n-1;

    whle (low <= high)
    {
        int mid = (low + high)/2;
        if (arr[mid]== target) retunr mid :
        else f (arr[mid]< target ), low = mid +1;
        else high = mid -1 ;
    }

    return -1; 
}