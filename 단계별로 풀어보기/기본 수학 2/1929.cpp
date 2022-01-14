#include <iostream>
#include <cmath>
using namespace std;

// find prime number

/*
에라토스테네스의 체:
By erasing the multiples of prime numbers smaller than sqrt(max),
the remaining numbers would all be a prime number.
*/

void findPrime(int a, int b) {
    bool primeNum[1000001];  // prime number == false
    primeNum[0]=true;
    primeNum[1]=true;

    for (int i=2; i<=sqrt(b); i++) 
        if (primeNum[i]==false)  // if i is prime number
            for (int j=i*2; j<=b; j+=i)
                primeNum[j]=true;

    for (int i=a; i<=b; i++)
        if (primeNum[i]==false)
            cout << i << '\n';
}


int main()
{
    int n, m;
    cin >> n >> m;

    findPrime(n, m);
    return 0;
}