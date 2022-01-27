#include <iostream>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_index=i;
        for (int j=i+1; j<n; j++) 
            if (arr[j]<arr[min_index]) 
                min_index=j;
        swap(&arr[i], &arr[min_index]);
    }   
}

int main()
{
    int n;
    cin >> n;

    int arr[n] = {};

    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    selectionSort(arr, n);

    for (int j=0; j<n; j++)
        cout << arr[j] << '\n';

}