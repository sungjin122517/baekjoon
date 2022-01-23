#include <iostream>
#include <string>
using namespace std;

// movie director Shawm

/*
First change the number to string then check whether three consecutive
digits are 6. Doesn't need to increment the number by 1000 or something
since it is Brute Force algorithm. No need efficiency.
Get used to utilizing functions from <string> library such as
to_string() and length().
*/

int findSeries(int n) {
    int num=666;
    string target;
    int count=0;

    while(1) {
        target=to_string(num);
        for (int i=0; i<target.length()-2; i++) {
            if (target[i]=='6' && target[i+1]=='6' && target[i+2]=='6') {
                count++;
                if (count==n)
                    return num;
                break;
            }
        }
        num++;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << findSeries(n);

    return 0;
}