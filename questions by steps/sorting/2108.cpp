#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double average(int arr[], int n) {
    double sum=0;
    for (int i=0; i<n; i++)
        sum+=arr[i];
    
    return round(sum/n);
}

int median(int arr[], int n) {
    return arr[n/2];
}

int mode(int numbers[], int arr[], int n) {
    int ans;
    int most=-9999;
    bool not_first = false;
    for (int i=0; i<8001; i++) {
        if (numbers[i]==0)
            continue;
        if (numbers[i]==most) {  // second largest number
            if (not_first) {
                ans=i-4000;
                not_first=false;
            }
        }
        if (numbers[i]>most) {
            most = numbers[i];
            ans = i-4000;
            not_first=true;
        }
    }

    return ans;
}

int range(int arr[], int n) {
    return arr[n-1]-arr[0];
}

int main()
{
    int n;
    cin >> n;

    int arr[n] = {};
    int numbers[8001] = {};

    for (int i=0; i<n; i++) {
        cin >> arr[i];
        numbers[arr[i]+4000]++;
    }

    sort(arr, arr+n);
    
    cout << average(arr, n) << '\n' << median(arr, n) << '\n' << 
    mode(numbers, arr, n) << '\n' << range(arr, n);

    return 0;

}