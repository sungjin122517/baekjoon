#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N==0)
        cout << 1;
    else {
        int fac=1;
        for (int i=N; i>0; i--) 
            fac*=i;
        cout << fac;
    }

    return 0;
}