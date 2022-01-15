#include <iostream>
using namespace std;

int main()
{
    int max=0;
    int total=0;
    for (int i=0; i<4; i++) {
        int out, in;
        cin >> out >> in;
        total-=out;
        total+=in;
        if (total>=max)
            max = total;
    }
    cout << max;

    return 0;
}