#include <iostream>
#include <cmath>
using namespace std;

// hanoi tower

/*
hanoi(N, start, to, via): start에서 to로 via를 거쳐 총 N개위 원반을 운반
*/

void hanoi(int n, int start, int to, int via) {
    if (n==1)
        cout << start << ' ' << to << '\n';
    else {
        hanoi(n-1, start, via, to);
        cout << start << ' ' << to << '\n';
        hanoi(n-1, via, to, start);
    }
}

int main()
{
    int n;
    cin >> n;

    // int num=1;
    // for (int i=0; i<n; i++)
    //     num*=2;
    // num-=1;
    // cout << num << '\n';
    cout << (int)pow(2, n) - 1 << '\n';

    hanoi(n, 1, 3, 2);

    return 0;
}