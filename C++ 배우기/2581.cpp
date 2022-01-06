#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M;
    cin >> N;

    bool primeNum;
    int sum = 0;
    int min = 10000;

    for (int i=M; i<=N; i++) {
        if (i == 1)
            primeNum = false;
        else
            primeNum = true;

        for (int j=2; j<=i/2; j++) {
            if (i%j==0) {
                primeNum = false;
                break;
            }
        }
        if (primeNum) {
            sum+=i;
            if (i<min)
                min = i;
        }
    }
    if (sum == 0) {
        cout << -1;
        return 0;
    }
    else
        cout << sum << "\n";
        cout << min;
        return 0;
}