#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int min=100;
    for (int i=0; i<7; i++) {
        int n;
        cin >> n;
        if (n%2==1) {
            sum += n;
            if (n<min)
                min = n;
        }
    }
    if (sum==0)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}