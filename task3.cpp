#include <iostream>
using namespace std;
void initialize(char **arr);
void player1(char **arr, int x, int y) ;



void player2(char **arr, int x, int y)
{

    arr[x][y] = 'O';
}

bool checkwin1(char **arr)
{
    if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') || (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') || (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X'))

        return true;
    else if ((arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') || (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') || (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X'))
        return true;
    else if ((arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') || (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'))
        return true;
    else
        return false;
}
bool checkwin2(char **arr)
{
    if ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') || (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') || (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O'))

        return true;
    else if ((arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') || (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') || (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O'))
        return true;
    else if ((arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') || (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O'))
        return true;
    else
        return false;
}

void print(char **arr)
{
    cout<<"\033[31m" << "  0 1 2" <<"\033[0m"<< endl; // Print the x-axis indices
    for (int i = 0; i < 3; i++)
    {
        cout<<"\033[31m" << i << " "<<"\033[0m"; // Print the y-axis index
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    char **arr = new char *[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = new char[3];
    }
    int count1 = 0;
    initialize(arr);
    while (true) // infinite loop
    {
        print(arr);
        int x, y;
        cout << "Player 1 turn" << endl;
    label:
        cout << "Enter x and y coordinates" << endl;
        cin >> x >> y;
        if (arr[x][y] == 'X' || arr[x][y] == 'O' || x > 2 || y > 2 || x < 0 || y < 0)
        {
            cout << "Invalid move" << endl;
            goto label;
        }
        player1(arr, x, y);
        count1++;
        print (arr);
        if (checkwin1(arr))
        {
            cout << "Player 1 wins" << endl;
            break;
        }
        if (count1 == 9)
        {
            cout << "Draw" << endl;
            break;
        }
        print(arr);
    label2:
        cout << "Player 2 turn" << endl;
        cout << "Enter x and y coordinates" << endl;
        cin >> x >> y;
        if (arr[x][y] == 'X' || arr[x][y] == 'O' || x > 2 || y > 2 || x < 0 || y < 0)
        {
            cout << "Invalid move" << endl;
            goto label2;
        }

        player2(arr, x, y);
        print(arr);
        if (checkwin2(arr))
        {
            cout << "Player 2 wins" << endl;
            break;
        }
        count1++;
        if (count1 == 9)
        {
            cout << "Draw" << endl;
            break;
        }
    }

    return 0;
}
//initialize the array
void initialize(char **arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = ' ';
        }
    }
}
//player 1 turn
void player1(char **arr, int x, int y)
{
    arr[x][y] = 'X';
}