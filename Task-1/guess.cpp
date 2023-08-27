#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls"); // For Windows
#else
    system("clear"); // For Linux and macOS
#endif
}

int main() {
    srand(time(0));
    char playAgain;

    do {
        clearScreen();
        cout << "\033[1;36m==============================================================================================================================================\n";
        cout << "\t\t\t\t\t\tWelcome to the Number Guessing Game\n";
        cout << "==============================================================================================================================================\033[0m\n\n";

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
            cout << "\n";
            if (userGuess == randomNumber) {
                cout << "\033[1;32mCongratulations!\033[0m You guessed the correct number in " << attempts << " attempts.\n";
            } else if (userGuess > randomNumber) {
                cout << "\033[1;33mToo High!\033[0m ";
            } else {
                cout << "\033[1;33mToo Low!\033[0m ";
            }
        } while (userGuess != randomNumber);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n";
    } while (playAgain == 'y' || playAgain == 'Y');

     cout << "\033[1;31mThank you for playing the Number Guessing Game!\033[0m" <<"\n"<<endl;
    return 0;
}
