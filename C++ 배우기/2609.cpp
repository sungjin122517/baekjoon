#include <iostream>
using namespace std;

int gcd(int a, int b) { // greatest common divisor
    int n;

    while (b != 0) {
        n = a%b;
        a = b;
        b = n;
    }

    return a;

    /* recursion method
    if (b == 0)
        return a;
    
    if (a < b)
        return gcd(b, a);

    return gcd(a % b, b);
    */
}

int lcm(int a, int b) {    // lowest common multiplier
    return a*b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << "\n" << lcm(a, b);

    return 0;
}