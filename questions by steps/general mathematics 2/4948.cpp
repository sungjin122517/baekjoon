#include <iostream>
#include <cmath>
using namespace std;

// Bertrand's postulate

int findPrime(int n) {
    bool primeNum[123456*2+1];  // prime number == false
    int sum=0;
    primeNum[0]=true;
    primeNum[1]=true;

    for (int i=2; i<=sqrt(2*n); i++) 
        if (primeNum[i]==false)  // if i is prime number
            for (int j=i*2; j<=2*n; j+=i)
                primeNum[j]=true;
                

    for (int i=n+1; i<=2*n; i++)
        if (primeNum[i]==false)
            sum++;
    
    return sum;
}


int main()
{
    int n;
    while(1) {
        cin >> n;
        if (n==0)
            break;
        else
            cout << findPrime(n) << '\n';
    }
}