#include <iostream>

using namespace std;

//displays menu of the game
void Menu() {
  cout << "-==||== G A M E - M E N U ==||==-" << endl;

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
  cout <<  "-==||== R U L E S ==||==-" << endl;

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
  cout << "Here's how the grid looks:" << endl;

}

//starts the game
void PlayGame() {

}

//exits the programme
void Exit() {

}

//asks if you want to continue, and if yes (y) displays the menu
void Continue(char cont) {
  cout << "Would you like to try something else? (y/n)" << endl;

  cin >> cont;

  if(cont == 'y') {
    Menu();
  }

  else {
    cout << "Okay! Got it!" << endl;
  }
}

int main() {

  cout << "--=||===||===|+|===||===||=--" << endl;
  cout << endl;
  cout << "THE RED PANDAS'S TIC-TAC-TOE" << endl;
  cout << endl;
  cout << "--=||===||===|+|===||===||=--" << endl;

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
      Continue(cont);
      break;
    }

    case 2: {
      HowToPlay();
      Continue(cont);
      break;
    }

    case 3: {
      PlayGame();
      Continue(cont);
      break;
    }

    case 4:
    {
      Exit();
      Continue(cont);
      break;
    }

    default: {
      cout << "Something's wrong! Make sure you've entered a whole number (type int) from 1 to 4." << endl;
    }
  }
}