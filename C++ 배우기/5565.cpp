#include <iostream>
using namespace std;

int main()
{
    int total;
    cin >> total;

    int price, sum=0;
    for (int i=0; i<9; i++) {
        cin >> price;
        sum += price;
    }

    cout << total-sum;

    return 0;
}