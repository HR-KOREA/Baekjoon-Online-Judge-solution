#include <iostream>
using namespace std;

int main()
{
    int n = 0;//세로
    int m = 0;//가로
    int count = 64;
    cin >> n >> m;

    char** chess;
    chess = new char* [n + 1];
    for (int i = 0; i < n; i++)
        chess[i] = new char[m + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> chess[i][j];//체스판 입력
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int white = 0;
            int black = 0;
            for (int a = 0; a < 8; a++)
            {
                for (int b = 0; b < 8; b++)
                {//흰검흰검 순서
                    if (chess[i + a][j + b] == 'B' && (a + b) % 2 == 0)
                        white++;
                    else if (chess[i + a][j + b] == 'W' && (a + b) % 2 != 0)
                        white++;
                    //검흰검흰 순서
                    if (chess[i + a][j + b] == 'W' && (a + b) % 2 == 0)
                        black++;
                    else if (chess[i + a][j + b] == 'B' && (a + b) % 2 != 0)
                        black++;
                }
            }
            if (white < black && white < count)
                count = white;
            else if (black <= white && black < count)
                count = black;
        }
    }
    cout << count << "\n";
    for (int i = 0; i < n; i++)
        delete[] chess[i];
    return 0;
}