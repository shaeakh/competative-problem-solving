#include <bits/stdc++.h>
using namespace std;

string s[3] = {"   ", "   ", "   "};
bool vis[3][3] = {{false,false,false},{false,false,false},{false,false,false}};
bool flag = false;
string winner = "none";
int size = 3;

void print_board()
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << s[i][j];
            if (j < size-1)
                cout << "|";
            else
                cout << endl;
        }
        if (i < size-1)
            cout << "-----" << endl;
    }
}

bool is_match_finished()
{
    for (int i = 0; i < size; i++)
    {
        if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][0] != ' ')
        {
            if (s[i][0] == 'X')
                winner = "Human";
            else
                winner = "Ai";
            return true;
        }
        else if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[0][i] != ' ')
        {
            if (s[0][i] == 'X')
                winner = "Human";
            else
                winner = "Ai";
            return true;
        }
        else if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[1][1] != ' ')
        {
            if (s[1][1] == 'X')
                winner = "Human";
            else
                winner = "Ai";
            return true;
        }
        else if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != ' ')
        {
            if (s[0][2] == 'X')
                winner = "Human";
            else
                winner = "Ai";
            return true;
        }
    }
    return false;
}



void ai_move()
{
    
    
}

void minimax(int min_max)
{
    // maximize
    if (min_max == 1)
    {
    
    }
    // minimize
    if (min_max == -1)
    {
    }
}

int main()
{
    int x, y ;
    cout << "Enter (x,y)\n" ;
    print_board();
    while (is_match_finished() == false)
    {
        cin >> x >> y;
        if (s[x][y] != ' ')
        {
            cout << "this cell is already taken\n";
            print_board();
        }
        else
        {
            s[x][y] = 'X';
            ai_move();
            print_board();
        }
    }
    if (winner != "none")
        cout << winner << " wins\n";
    else
        cout << "The match is draw\n";
}
