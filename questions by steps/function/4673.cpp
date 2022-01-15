#include <iostream>
using namespace std;

int selfNum(int n) {
    int num = n;
    while (n!=0) {
        num += n%10;
        n/=10;
    }
    
    return num;
}

bool selfNumArr[10001];

int main()
{
    for (int i=1; i<=10000; i++) {
        int temp = selfNum(i);
        if (temp <= 10000)
            selfNumArr[temp] = true;
    }
    for (int j=1; j<=10000; j++) {
        if (!selfNumArr[j])
            cout << j << endl;
    }
    
    return 0;
}