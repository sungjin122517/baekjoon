#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {};

    for (int i=0; i<n; i++) 
        cin >> arr[i];
    
    /*
    Here we take two parameters, the beginning of the array and the length
    n upto which we want the array to be sorted.
    */
    sort(arr, arr+n);

    for (int j=0; j<n; j++)
        cout << arr[j] << '\n';

}