#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()
using namespace std ;
int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    string playerMove;
    string computerMove;
    int playerScore = 0;
    int computerScore = 0;
    string playAgain;
    while (true) {
        cout << "Enter your move (rock, paper, or scissors): ";
        cin >> playerMove;
        // Generate a random move for the computer
        int moveNum = rand() % 3;
        if (moveNum == 0) {
            computerMove = "rock";
        } else if (moveNum == 1) {
            computerMove = "paper";
        } else {
            computerMove = "scissors";
        }

        cout << "Computer move: " << computerMove << endl;

        // Determine the winner
        if (playerMove == computerMove) {
            cout << "It's a tie!" << endl;
        } else if (playerMove == "rock" && computerMove == "scissors" ||
                   playerMove == "paper" && computerMove == "rock" ||
                   playerMove == "scissors" && computerMove == "paper") {
            cout << "You win!" << endl; 
            playerScore++;
        } else {
            cout << "You lose!" << endl;
            computerScore++;
        }

        cout << "Player: " << playerScore << " | Computer: " << computerScore << endl;
        cout << "Do you want to play again? (y/n) ";
        cin >> playAgain;
        if(playAgain == "n")
            break;
        else if(playAgain=="y"){
                continue;
            }
        else{
            std::cout<<"invalid choice \n";
        }
    }
    return 0;
}
