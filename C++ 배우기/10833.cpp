#include <iostream>
using namespace std;

int main()
{
    int schoolNum;
    cin >> schoolNum;
    
    int remain=0;
    for (int i=0; i<schoolNum; i++) {
        int student, apple;
        cin >> student >> apple;
        remain += apple%student;
    }
    cout << remain;

    return 0;
}