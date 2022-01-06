#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[N];
    for (int i=0; i<N; i++) {
        int a;
        cin >> A[i];
    }

    for (int i=0; i<N; i++) {
        if (A[i]<X)
            cout << A[i] << " ";
    }
        
    return 0;
}