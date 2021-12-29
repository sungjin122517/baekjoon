#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n>=1 && n<=100000)
        for (int i=1; i<=n; i++)
            cout << i << "\n";
    /* endl은 단순히 개행만 하는 것이 아닌 버퍼를 비우는 작업도 같이 하기 때문에
    "\n"을 사용해주는 것이 알고리즘 풀이에서는 좋다. */

    return 0;
}