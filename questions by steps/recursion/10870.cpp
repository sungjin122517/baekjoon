#include <iostream>
using namespace std;

// fibonacci number

int fibo(int a) {
    // int num=0;

    if (a==0)
        return 0;
    else if (a==1)
        return 1;
    else 
        return fibo(a-1) + fibo(a-2);
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}