#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    int a, b, sum[testCase];
    for (int i=0; i<testCase; i++) {
        cin >> a >> b;
        sum[i] = a+b;
    }

    for (int i=0; i<testCase; i++)
        cout << sum[i] << endl;

    return 0;
}