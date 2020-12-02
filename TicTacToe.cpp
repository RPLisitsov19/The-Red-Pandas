#include <iostream>
#include <iomanip>

using namespace std;

char place[10] = {'0','1','2','3','4','5','6','7','8','9'};
//displays menu of the game and its options
void Menu() {
  cout << setw(38) << "-==||== G A M E - M E N U ==||==-" << endl;

  cout << endl;

  cout << "Here are all the options you can try:" << endl;

  cout << endl;

    cout << "1. Rules" << endl;
    cout << "2. How To Play" << endl;
    cout << "3. Play Game" << endl;
    cout << "4. Exit" << endl;
}

//displays text, containing the rules (1)
void Rules() {
  cout << setw(35) << "-==||== R U L E S ==||==-" << endl;

  cout << endl;

  cout << "1. The game is played on a grid that's 3x3 squares." << endl;

  cout << endl;

  cout << "2. One playes is 'X', the other is 'O'. Players take turns putting their marks in empty squares." << endl;

  cout << endl;

  cout << "3. The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner." << endl;

  cout << endl;

  cout << "4. When all squares are filled, the game is over. If none of the players have 3 of their symbols in a row, the game ends in a draw." << endl;
}

//displays text, explaining how to play the game (2)
void HowToPlay() {

  cout << setw(44) << "-==||== H O W - T O - P L A Y ==||==-" << endl;

  cout << endl;

  cout << "Here's how the grid looks:" << endl;

  cout << "     ┃     ┃     " << endl;
  cout << "  1  ┃  2  ┃  3  " << endl;
  cout << "     ┃     ┃     " << endl;

  cout << "━━━━━┃━━━━━┃━━━━━" << endl;
  cout << "  4  ┃  5  ┃  6  " << endl;
  cout << "     ┃     ┃     " << endl;

  cout << "━━━━━┃━━━━━┃━━━━━" << endl;
  cout << "  7  ┃  8  ┃  9  " << endl;
  cout << "     ┃     ┃     " << endl;
 
  cout << endl;

  cout << "Player 1 (X) starts off the game by entering the number that corresponds to the number on the grid where they want to place their symbol." << endl;
  cout << "Then Player 2 (O) makes their move. And the two players take turns." << endl;
  cout << "The game ends when one of the players has their symbol in a row." << endl;

}

//checks if symbols are in a row and finds the winner of the game
int findWinner() {
    if (place[1] == place[2] && place[2] == place[3])
    {
      return 1;
    }

    else if (place[4] == place[5] && place[5] == place[6])
    {
      return 1;
    }

    else if (place[7] == place[8] && place[8] == place[9])
    {
      return 1;
    }

    else if (place[1] == place[4] && place[4] == place[7])
    {
      return 1;
    }  

    else if (place[2] == place[5] && place[5] == place[8])
    {
      return 1;
    }

    else if (place[3] == place[6] && place[6] == place[9])
    {
      return 1;
    }

    else if (place[1] == place[5] && place[5] == place[9])
    {
      return 1;
    }

    else if (place[3] == place[5] && place[5] == place[7])
    {
      return 1;
    }

    else if (place[1] != '1' && place[2] != '2' && place[3] != '3' && place[4] != '4' && place[5] != '5' && place[6] != '6' && place[7] != '7' && place[8] != '8' && place[9] != '9')
    {
      return 0;
    }

    else
    {
      return -1;
    }    
}

//prints game board
void playField() {
    cout << setw(20) <<"Tic Tac Toe" << setw(20) << endl;

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

//starts game (3)
int PlayGame() {
  int player = 1, winner;
  char mark;
  char move;
    do{
        playField();
        system ("cls");

        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", what spot are you choosing? ";
        
        cin >> move;
        
        mark = (player == 1) ? 'X' : 'O';

        if (move == '1' && place[1] == '1') {
          place[1] = mark;
        } 

        else if (move == '2' && place[2] == '2') {
          place[2] = mark;
        }

        else if (move == '3' && place[3] == '3') {
          place[3] = mark;
        }

        else if (move == '4' && place[4] == '4') {
          place[4] = mark;
        } 

        else if (move == '5' && place[5] == '5') {
          place[5] = mark;
        } 

        else if (move == '6' && place[6] == '6') {
          place[6] = mark;
        }

        else if (move == '7' && place[7] == '7') {
          place[7] = mark;
        }

        else if (move == '8' && place[8] == '8') {
          place[8] = mark;
        }

        else if (move == '9' && place[9] == '9') {
          place[9] = mark;
        }
      
        else {
          cout << "Oops! Looks like you entered something wrong." << endl;
          player--;
        }

        winner = findWinner();
        player++;
    }
    while(winner == -1);

    playField();

    if(winner == 1) {
      cout << "Great job, Player " << --player << "! You won the game!";
    }

    else {
      cout << "TIED!";
    }

    return 0;
}

//exits the code (4)
bool Exit() {
  return 0;
}

//displays the menu again and makes you choose an option
void Continue(char cont, int choice) {

  cout << endl;
  cout << "Would you like to see something else? (y/n)";
  
  cin >> cont; 

  if(cont != 'y' && cont != 'n') {

    cout << endl; 

    cout << "Error! Please enter y (yes) or n (no). |You need to restart the programme.|"; 
  }

  if(cont == 'y') {
    Menu();

    cout << "Enter option number: ";
    cin >> choice;

    switch(choice) {

    case 1: {
      Rules();
      Continue(cont, choice);
      break;
    }

    case 2: {
      HowToPlay();
      Continue(cont, choice);
      break;
    }

    case 3: {
      PlayGame();
      Continue(cont, choice);
      break;
    }

    case 4: {
      Exit();
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
    }
  }
}

int main() {

  cout << setw(40) << "--=+||===|+|===|▼|===|+|===|+|=--" << endl;
  cout << endl;
  cout << setw(35) << "THE RED PANDAS'S TIC-TAC-TOE" << endl;
  cout << endl;
  cout << setw(40) << "--=|+|===|+|===|▲|===|+|===|+|=--" << endl;

  cout << endl;

  Menu();

  int choice;
  char cont;
  {

  cout << "Enter option number: ";

  cin >> choice;

  cout << endl;

  switch(choice) {

    case 1: {
      Rules();
      Continue(cont, choice);
      break;
    }

    case 2: {
      HowToPlay();
      Continue(cont, choice);
      break;
    }

    case 3: {
      PlayGame();
      Continue(cont, choice);
      break;
    }
    
    case 4: {
      Exit();
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
  }
}
}  