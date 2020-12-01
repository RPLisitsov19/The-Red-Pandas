#include <iostream>
#include <iomanip>
using namespace std;
char place[10] = {'0','1','2','3','4','5','6','7','8','9'};

int findWinner()
{
    if (place[1] == place[2] && place[2] == place[3])
    {
      return 1;
    }
    else if (place[4] == place[5] && place[5] == place[6])

        return 1;
    else if (place[7] == place[8] && place[8] == place[9])

        return 1;
    else if (place[1] == place[4] && place[4] == place[7])

        return 1;
    else if (place[2] == place[5] && place[5] == place[8])

        return 1;
    else if (place[3] == place[6] && place[6] == place[9])

        return 1;
    else if (place[1] == place[5] && place[5] == place[9])

        return 1;
    else if (place[3] == place[5] && place[5] == place[7])

        return 1;
    else if (place[1] != '1' && place[2] != '2' && place[3] != '3' 
          && place[4] != '4' && place[5] != '5' && place[6] != '6' 
                  && place[7] != '7' && place[8] != '8' && place[9] != '9')

        return 0;
    else
        return -1;
}

void playField()
{
    cout << setw(20) <<"Tic Tac Toe" << setw(20);;

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     ┃     ┃     " << endl;
    cout << "  " << place[1] << "  ┃  " << place[2] << "  ┃  " << place[3] << endl;

    cout << "     ┃     ┃     " << endl;
    cout << "━━━━━┃━━━━━┃━━━━━" << endl;

    cout << "  " << place[4] << "  ┃  " << place[5] << "  ┃  " << place[6] << endl;

    cout << "     ┃     ┃     " << endl;
    cout << "━━━━━┃━━━━━┃━━━━━" << endl;

    cout << "  " << place[7] << "  ┃  " << place[8] << "  ┃  " << place[9] << endl;

    cout << "     ┃     ┃     " << endl << endl;
}

int main()
{
	int player = 1, i, move;

    char mark;
    do
    {
        playField();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> move;

        mark=(player == 1) ? 'X' : 'O';

        if (move == 1 && place[1] == '1')

            place[1] = mark;
        else if (move == 2 && place[2] == '2')

            place[2] = mark;
        else if (move == 3 && place[3] == '3')

            place[3] = mark;
        else if (move == 4 && place[4] == '4')

            place[4] = mark;
        else if (move == 5 && place[5] == '5')

            place[5] = mark;
        else if (move == 6 && place[6] == '6')

            place[6] = mark;
        else if (move == 7 && place[7] == '7')

            place[7] = mark;
        else if (move == 8 && place[8] == '8')

            place[8] = mark;
        else if (move == 9 && place[9] == '9')
        {
          place[9] = mark;
        }
        else
        {
          cout<<"Invalid move "<<endl;
          player--;
        }
        i=findWinner();

        player++;
    }while(i==-1);
    playField();
    if(i==1)
    {
      cout<<"Player "<<--player<<" win ";
    }
    else
    {
      cout<<"Game draw";
    }
    return 0;
}