#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    bool primeNum;
    int count = 0;
    for (int i=0; i<N; i++) {
        int num;
        cin >> num;
        if (num == 1)
            primeNum = false;
        else
            primeNum = true;
            
        for (int j=2; j<=num/2; j++) {
            if (num%j==0) {
                primeNum = false;
                break;
            }    
        }
        if (primeNum == true)
            count++;
    }
    cout << count;
    
    return 0;
}