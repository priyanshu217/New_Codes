#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_GUESSES = 6;

void drawHangman(int guesses) {
    switch (guesses) {
        case 6:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << "     | \n";
            cout << "     | \n";
            cout << "     | \n";
            cout << "     | \n";
            break;
        case 5:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << "     | \n";
            cout << "     | \n";
            cout << "     | \n";
            break;
        case 4:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << " |   | \n";
            cout << "     | \n";
            cout << "     | \n";
            break;
        case 3:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << " /|   | \n";
            cout << "     | \n";
            cout << "     | \n";
            break;
        case 2:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << " /|\\  | \n";
            cout << "     | \n";
            cout << "     | \n";
            break;
        case 1:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << " /|\\  | \n";
            cout << " /    | \n";
            cout << "     | \n";
            break;
        case 0:
            cout << " +---+ \n";
            cout << " |   | \n";
            cout << " O   | \n";
            cout << " /|\\  | \n";
            cout << " / \\  | \n";
            cout << "     | \n";
            break;
    }
}

int main() {
    srand(time(0));
    string word = "hangman";
    string guessedWord = "";
    for (int i = 0; i < word.length(); i++) {
        guessedWord += "_";
    }
    int guesses = MAX_GUESSES;
    char guess;

    while (guesses > 0) {
        cout << "Guess a letter: ";
        cin >> guess;
        bool correctGuess = false;

        for (int i = 0; i < word.length(); i++) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            guesses--;
            cout << "Incorrect guess. You have " << guesses << " guesses left.\n";
        }

        cout << guessedWord << "\n";
        drawHangman(guesses);

        if (guessedWord == word) {
            cout << "Congratulations, you won!\n";
            return 0;
        }
    }

    cout << "Game over. The word was " << word << ".\n";
    return 0;
}