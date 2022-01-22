#include <iostream>
#include <algorithm>
using namespace std;

// re-colour chessboard

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string board[50];

int bw(int x, int y) {
    int count=0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (board[x+i][y+j] != BW[i][j])
                count++;
        }
    }

    return count;
}

int wb(int x, int y) {
    int count=0;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            if (board[x+i][y+j] != WB[i][j])
                count++;
        }
    }

    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++) 
        cin >> board[i];
    
    int min=64;

    for (int i=0; i+8<=n; i++) {
        for (int j=0; j+8<=m; j++) {
            int temp;
            if (bw(i, j)>wb(i, j))
                temp = wb(i, j);
            else
                temp = bw(i, j);
            
            if (temp<min)
                min = temp;
        }
    }
    cout << min;

    return 0;
}