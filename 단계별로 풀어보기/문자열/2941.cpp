#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int sum=0, i=0;
    while (i<input.length()) {
        if (input[i]=='c') {
            if (input[i+1]=='=' || input[i+1]=='-')
                i++;
        }
        else if (input[i]=='d') {
            if (input[i+1]=='z' && input[i+2]=='=') 
                i+=2;
            else if (input[i+1]=='-') 
                i++;
        }
        else if (input[i]=='l' || input[i]=='n') {
            if (input[i+1]=='j') 
                i++;
        }
        else if (input[i]=='s' || input[i]=='z') {
            if (input[i+1]=='=')
                i++;
        }
        sum++;
        i++;
    }
    cout << sum;

    return 0;
}