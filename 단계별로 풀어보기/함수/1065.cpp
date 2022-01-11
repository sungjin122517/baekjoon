#include <iostream>
using namespace std;

int arith(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        if (i<100)
            sum++;
        else {
            int a=i/100, b=(i/10)%10, c=i%10;
            if (a-b == b-c)
                sum++;
        }
    }
    return sum;
}


int main()
{
    int n;
    cin >> n;

    cout << arith(n);

    return 0;
}