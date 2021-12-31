#include <iostream>
using namespace std;

/* recursive method는 간단하지만 이미 구했던 fib(0), fib(1) 등의 값을 매번 다시
계산하기 때문에 연산량이 과하게 많아 실행 속도가 매우 느리다.

또한 fibonacci 수열은 n이 커질수록 값이 급속도로 증가하므로 자료형은 long long을
사용한다.
*/

long long fiboarr[91] = {0, 1, };
long long fibo(int n) {
    if (n==0 || n==1) 
        return fiboarr[n];
    else if (fiboarr[n] == 0)
        fiboarr[n] = fibo(n-1) + fibo(n-2);
    
    return fiboarr[n];
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n);

    return 0;
}