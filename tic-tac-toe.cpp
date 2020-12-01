#include <iostream>
#include <iomanip>

using namespace std;

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

  cout << "     |     |     " << endl;
  cout << "  1  |  2  |  3  " << endl;
  cout << "_____|_____|_____" << endl;

  cout << "     |     |     " << endl;
  cout << "  4  |  5  |  6  " << endl;
  cout << "_____|_____|_____" << endl;

  cout << "     |     |     " << endl;
  cout << "  7  |  8  |  9  " << endl;
  cout << "     |     |     " << endl;
 
  cout << endl;

  cout << "Player 1 (X) starts off the game by entering the number that corresponds to the number on the grid where they want to place their symbol." << endl;
  cout << "Then Player 2 (O) makes their move. And the two players take turns." << endl;
  cout << "The game ends when one of the players has their symbol in a row." << endl;

}

//starts the game (3)
void PlayGame() {

}

//exits the code (4)
bool Exit() {
  return 0;
}

//displays the menu again and makes you choose an option
bool Continue(char cont, int choice) {

  cout << endl;
  cout << "Would you like to see something else? (y/n)";
  
  cin >> cont;

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

    case 4:
    {
      Exit();
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
  }
}

  return 0;
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

    case 4:
    {
      Exit();
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
  }
}
