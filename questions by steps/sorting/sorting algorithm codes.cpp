#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_index = i;
        for (int j=i+1; j<n; j++) 
            if (arr[j] < arr[min_index])
                min_index = j;
        swap(&arr[min_index], &arr[i]);
    }
}

void merge(int arr[], int left, int mid, int right) {
    int arr1 = mid-left+1;  // number of elements in first subarray
    int arr2 = right-mid;   // number of elements in second subarray

    // create temp arrays
    int *leftArr = new int[arr1];
    int *rightArr = new int[arr2];

    // copy data to temp arrays leftArr[] and rightArr[]
    for (int i=0; i<arr1; i++)
        leftArr[i] = arr[left+i];
    for (int j=0; j<arr2; j++)
        rightArr[j] = arr[mid+1+j];

    int arr1Index = 0;
    int arr2Index = 0;
    int arrMergedIndex = left;

    // merge the temp arrays back into arr[left..right]
    while (arr1Index < arr1 && arr2Index < arr2) {
        if (leftArr[arr1Index] <= rightArr[arr2Index]) {
            arr[arrMergedIndex] = leftArr[arr1Index];
            arr1Index++;
        }
        else {
            arr[arrMergedIndex] = rightArr[arr2Index];
            arr2Index++;
        }
        arrMergedIndex++;
    }

    // copy the remaining elements of leftArr[], if there are any.
    while (arr1Index < arr1) {
        arr[arrMergedIndex] = leftArr[arr1Index];
        arr1Index++;
        arrMergedIndex++;
    }

    // copy the remaining elements of rightArr[], if there are any.
    while (arr2Index < arr2) {
        arr[arrMergedIndex] = leftArr[arr2Index];
        arr2Index++;
        arrMergedIndex++;
    }
}

void mergeSort(int arr[], int begin, int end) {
    if (begin >= end)
        return;
    
    int mid = begin + (end-begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void quickSort(int arr[], int i, int j) {
    if (i >= j)
        return;
    
    int pivot = arr[(i+j)/2];  // pivot in the middle
    int left=i, right=j;

    /* when left>pivot and right<pivot, they stop and exchange elements.
    This is repeated until left>right (either of them passes by the pivot).
    */
    while (left<=right) {
        while (arr[left]<pivot)
            left++;
        while (arr[right]>pivot)
            right--;
        if (left<=right) {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }

    // by doing recursion, the array is partitioned into two and they are
    // quick-sorted again until the whole array is sorted.
    quickSort(arr, i, right);
    quickSort(arr, left, j);

}

/*
Here we take two parameters, the beginning of the array and the length
n upto which we want the array to be sorted.
*/
sort(arr, arr+n);
