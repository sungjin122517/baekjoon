#include <iostream>
#include <algorithm>
using namespace std;

// sort inside

int findDigitNum(int n) {
    int digit=0;
    while (n!=0) {
        n/=10;
        digit++;
    }
    
    return digit;
}

/*
another method:

int n, num[10];
char str[11];

int main() {
    cin >> str[11];

    for (int i=0; str[i]; i++)
        num[str[i]-'0']++;
    
    for (int j=9; j>=0; j--) {
        while (num[j]>0) {
            cout << j;
            num[j]--;
        }
    }
}
*/

int main()
{
    int n;
    cin >> n;

    int digit = findDigitNum(n);
    // cout << digit << endl;
    int arr[digit] = {};

    for (int i=0; i<digit; i++) {
        arr[i]=n%10;
        n/=10;
    }

    sort(arr, arr+digit);
    for (int j=digit-1; j>=0; j--)
        cout << arr[j];

    return 0;

}