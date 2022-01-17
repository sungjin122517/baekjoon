#include <iostream>
#include <cmath>
using namespace std;

// Goldbach conjecture: 2보다 큰 모든 짝수는 2개의 소수의 합

/*
Things that I learned:
- The elements field within square brackets [], representing the number
of elements of an array must be a constant expression, since arrays are
blocks of static memory whose size must be determined at compile time,
before the program runs. 
*/

int main()
{
    int num, max=0;
    cin >> num;

    int even[num]={};

    for (int i=0; i<num; i++) {
        cin >> even[i];
        if (even[i]>max)
            max=even[i];
    }

    bool arrPrime[max+1]={};  // prime number == false(0)
    arrPrime[0]=true;
    arrPrime[1]=true;
    for (int i=2; i<=sqrt(max); i++) 
        if (arrPrime[i]==false)  // if i is prime number
            for (int j=i*2; j<=max; j+=i)
                arrPrime[j]=true;
    
    for (int i=0; i<num; i++) {
        for (int j=even[i]/2; j>0; j--) {
            if (arrPrime[j]==0 && arrPrime[even[i]-j]==0) {
                cout << j << ' ' << even[i]-j << '\n';
                break;
            }
        }
    }

    return 0;
}