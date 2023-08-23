#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

int main() {
    srand(time(0));
    char playAgain;

    do {
        cout << "==============================================================================================================================================\n";
        cout << "\t\t\t\t\t\t\tWelcome to Number Guessing Game\n";
        cout << "==============================================================================================================================================\n";

        int randomNumber = rand() % 100 + 1; // Generates a random number between 1 and 1000
        int userGuess;
        int attempts = 0;

        do {
              if (attempts > 0) {
                cout << "Give another try: ";
            } else {
                cout << "Guess a number between 1 and 100: ";
            }
            cin >> userGuess;
            attempts++;
            if (userGuess == randomNumber) {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
            } else if (userGuess > randomNumber) {
                cout << "Too High!\n";
            } else {
                cout << "Too Low!\n";
            }
        } while (userGuess != randomNumber);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;
    return 0;
}
