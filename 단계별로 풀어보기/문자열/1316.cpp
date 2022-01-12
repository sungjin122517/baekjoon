#include <iostream>
#include <cstring>
using namespace std;

// group word checker

bool wordCheck(string str) {
    for (int j=0; j<str.length()-1; j++) {
        for (int k=j+1; k<str.length(); k++) {
            if (str[j]==str[k]) {
                if (k-j==1)
                    j++;
                else
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int sum=0;
    for (int i=0; i<n; i++) {
        string str;
        cin >> str;

        if (wordCheck(str))
            sum++;
    }
    cout << sum;

    return 0;
}